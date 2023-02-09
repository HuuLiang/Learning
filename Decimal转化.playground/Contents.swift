import Foundation

extension Decimal {
    ///重要 小数不能强转 精度会丢失 只限于乘以商品价格之后 后两位为0的场景适用
    var intValue:Int {
        return NSNumber(value: doubleValue).intValue
    }
    
    var doubleValue:Double {
//        return NSDecimalNumber(decimal: self).doubleValue
        return stringValue.doubleValue
    }
    
    var stringValue:String {
        let formatter = NumberFormatter()
        formatter.maximumFractionDigits = 2
        formatter.minimumFractionDigits = 0
        formatter.minimumIntegerDigits = 1
        formatter.numberStyle = .none
        formatter.decimalSeparator = "."
        return formatter.string(from: self as NSNumber) ?? ""
    }
    
    var longStringValue:String {
        let formatter = NumberFormatter()
        formatter.maximumFractionDigits = 2
        formatter.minimumFractionDigits = 2
        formatter.minimumIntegerDigits = 1
        formatter.numberStyle = .none
        formatter.decimalSeparator = "."
        return formatter.string(from: self as NSNumber) ?? ""
    }
    
}

extension Double {
    
    var intValue:Int {
        return Int(self)
    }
    
    var decimalValue:Decimal {
        return stringValue.decimalValue
    }
    
    var stringValue:String {
        let formatter = NumberFormatter()
        formatter.maximumFractionDigits = 2
        formatter.minimumFractionDigits = 0
        formatter.minimumIntegerDigits = 1
        formatter.numberStyle = .none
        formatter.decimalSeparator = "."
        return formatter.string(from: self as NSNumber) ?? ""
    }
    
    var longStringValue:String {
        let formatter = NumberFormatter()
        formatter.maximumFractionDigits = 2
        formatter.minimumFractionDigits = 2
        formatter.minimumIntegerDigits = 1
        formatter.numberStyle = .none
        formatter.decimalSeparator = "."
        return formatter.string(from: self as NSNumber) ?? ""
    }

}


//MARK: Decimal
extension String {
    
    var decimalValue:Decimal {
        return .init(string: self) ?? .zero
    }
    
    var doubleValue:Double {
        return Double(self) ?? .zero
    }
}



struct DTO:Decodable {
    let amount:Decimal
    
    enum CodingKeys:String,CodingKey {
        case amount
    }
    
    init(from decoder: Decoder) throws {
        let values = try decoder.container(keyedBy: CodingKeys.self)
        amount = try values.decode(Double.self, forKey: .amount).decimalValue
    }
}

var value = Decimal(string:"0.00")!

var allValues:[String] = []
while value <= Decimal(string:"999.99")! {
    defer {
        value += Decimal(string:"0.01")!
    }
    let backText = """
    {"amount":\(value)}
    """
    let backResp = backText.data(using: .utf8)!
    print(backText)
    let decoded:DTO = try! JSONDecoder().decode(DTO.self, from: backResp)
    if value != decoded.amount  {
        allValues.append("\(decoded.amount) \(value)")
    }
}
print(allValues.count)
debugPrint(allValues)
