import UIKit

extension Array where Element == UInt32 {
    
    func toString() -> String {
        var result:String = ""
        forEach {
            result.append(Character.init(Unicode.Scalar.init($0)!))
        }
        return result
    }
    
    func encrypt() -> [UInt32] {
        var new:[UInt32] = []
        for idx in 0..<count {
            if idx % 2 == 0 {
                new.append(self[idx] + 1)
            } else {
                new.append(self[idx] - 1)
            }
        }
        return new
    }
    
    func decrypt() -> [UInt32] {
        var new:[UInt32] = []
        for idx in 0..<count {
            if idx % 2 == 0 {
                new.append(self[idx] - 1)
            } else {
                new.append(self[idx] + 1)
            }
        }
        return new
    }
    
}

extension String {
    
    var ascii:[UInt32] {
        unicodeScalars.map{$0.value}
    }

}

let psd:String = "qwe123123"

func encrypt(with psd:String) -> String {
    return psd.ascii.encrypt().toString()
}

func decrypt(with encrypt:String) -> String {
    return encrypt.ascii.decrypt().toString()
}

let encrypt:String = encrypt(with: psd)
print("encrypt:\(encrypt)")
let decrypt:String = decrypt(with: encrypt)
print("decrypt:\(decrypt)")
