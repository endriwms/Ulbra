enum class Currency(val symbol: String) {
    BRL("R$"),
    USD("$"),
    IEN("¥")
}

fun String.addCurrencyType(currency: Currency): String = "${currency.symbol}$this";

fun currencyConverter(value: String, fromCurrency: Currency, toCurrency: Currency): String {
    val tax = when (fromCurrency to toCurrency) {
        Currency.BRL to Currency.USD -> 0.20;
        Currency.BRL to Currency.IEN -> 23.57;
        Currency.USD to Currency.BRL -> 5.00;
        Currency.USD to Currency.IEN -> 117.85;
        Currency.IEN to Currency.BRL -> 0.042;
        Currency.IEN to Currency.USD -> 0.0085;
        else -> 1.0
    }

    val newCurrencyValue = value.toDouble() * tax;
    return String.format("%.2f", newCurrencyValue);
}
fun main() {
    val value = "100";

    val usdValue = currencyConverter(value, Currency.BRL, Currency.USD);
    println(usdValue.addCurrencyType(Currency.USD));

    val ienValue = currencyConverter(value, Currency.USD, Currency.IEN);
    println(ienValue.addCurrencyType(Currency.IEN));

    val brlValue = currencyConverter(value, Currency.IEN, Currency.BRL);
    println(brlValue.addCurrencyType(Currency.BRL));
}