actor BankAccount {
    let accountNumber: Int
    var balance: Double

    init(accountNumber: Int, initialDeposit: Double) {
        self.accountNumber = accountNumber
        self.balance = initialDeposit
    }
}

extension BankAccount {
    func deposit(amount: Double) async {
        assert(amount >= 0)
        balance = balance + amount
    }
}

let account = BankAccount(accountNumber: 1234, initialDeposit: 1000)

print(account.accountNumber) // OK，不可变状态
Task {
    print(await account.balance) // 可变状态的访问需要使用 await
}

//await account.deposit(amount: 90) // actor 的函数调用需要 await
//print(await account.balance)

await withCheckedContinuation({ xx in
    
})

if #available(iOS 15, *) {
    
}
