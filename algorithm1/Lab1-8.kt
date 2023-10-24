fun separateArrays(inputArray: IntArray): Triple<IntArray, IntArray, IntArray> {
    val positiveList = mutableListOf<Int>()
    val negativeList = mutableListOf<Int>()
    val zeroList = mutableListOf<Int>()

    for (element in inputArray) {
        when {
            element > 0 -> positiveList.add(element)
            element < 0 -> negativeList.add(element)
            element == 0 -> zeroList.add(element)
        }
    }

    return Triple(positiveList.toIntArray(), negativeList.toIntArray(), zeroList.toIntArray())
}

fun main() {
    val inputArray = intArrayOf(1, -2, 0, 5, -3, 0, 10, -7)
    val (positives, negatives, zeros) = separateArrays(inputArray)

    println("Исходный массив: ${inputArray.joinToString(", ")}")
    println("Положительные элементы: ${positives.joinToString(", ")}")
    println("Отрицательные элементы: ${negatives.joinToString(", ")}")
    println("Нулевые элементы: ${zeros.joinToString(", ")}")
}
