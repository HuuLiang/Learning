import UIKit

import Foundation
import UIKit

extension Int {
    
    var visitDescription:String {
        if self >= 10000 {
            let rem = self % 10000
            if rem == 0 {
                return "\(self/10000)w"
            } else if rem < 1000 {
                return "\(self/10000)w+"
            } else {
                return String(format: "%.1fw+", CGFloat(self/1000) / 10.0)
            }
        } else if self >= 1000 {
            let rem = self % 1000
            if rem == 0 {
                return "\(self/1000)k"
            } else if rem < 100 {
                return "\(self/1000)k+"
            } else {
                return String(format: "%.1fk+", CGFloat(self/100) / 10.0)
            }
        } else {
            return "\(self)"
        }
    }

}

let s:[Int] = [11800,1288]
s.forEach {print("\($0) --------  \($0.visitDescription)")}
