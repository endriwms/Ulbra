class Account {
  double balance;
  String accountNumber;

  Account({required this.balance, required this.accountNumber});

  factory Account.fromJson(Map<String, dynamic> json) {
    return Account(
      balance: json['balance'] as double,
      accountNumber: json['accountNumber'] as String,
    );
  }

  Map<String, dynamic> toJson() {
    return {
      'balance': balance,
      'accountNumber': accountNumber,
    };
  }
}
