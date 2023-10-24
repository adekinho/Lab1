fun isPrime(number: Int): Boolean {
    if (number <= 1) return false
    if (number <= 3) return true
    if (number % 2 == 0 || number % 3 == 0) return false
    var i = 5
    while (i * i <= number) {
        if (number % i == 0 || number % (i + 2) == 0) return false
        i += 6
    }
    return true
}

fun filterOutPrimes(inputArray: IntArray): IntArray {
    val result = mutableListOf<Int>()
    for (element in inputArray) {
        if (!isPrime(element)) {
            result.add(element)
        }
    }
    return result.toIntArray()
}

fun main() {
    val inputArray = intArrayOf(2, 3, 5, 7, 10, 15, 8, 12)
    val filteredArray = filterOutPrimes(inputArray)
    println("Исходный массив: ${inputArray.joinToString(", ")}")
    println("Массив без простых чисел: ${filteredArray.joinToString(", ")}")
}