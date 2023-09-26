fun main(args: Array<String>) {
    // Введите размеры массивов M и N с клавиатуры
    println("Введите размер массива A:")
    val m = readlnOrNull()?.toInt() ?: 0  //If the user types null, then the null is changed to 0 (Elvis operator)

    println("Введите размер массива B:")
    val n = readlnOrNull()?.toInt() ?: 0

    // Create массивы A and B fill the elements from keyboard
    val a = mutableListOf<Int>()
    val b = mutableListOf<Int>()
    val c = mutableListOf<Int>()

    println("Введите элементы массива A:") //We are asking the user to input the elements of an array A.
    for (i in 0 until m) {
        val element = readlnOrNull()?.toInt() ?: 0
        a.add(element)
    }

    println("Введите элементы массива B:") //Same for B
    for (i in 0 until n) {
        val element = readlnOrNull()?.toInt() ?: 0
        b.add(element)
    }

    val lengthA = a.size  //No need for this, asking the length of array A and B merged.
    val lengthB = b.size
    val lengthSum = lengthA + lengthB

    println("Size of the third array is: $lengthSum")  //Length of an array but with duplicates.

    c += a
    c += b
    val distinctC = c.distinct()

    for (i in 0 until lengthSum) {
        for (j in i + 1 until lengthSum) {
            if (c[i] > c[j]) {
                val swap = c[i]
                c[i] = c[j]
                c[j] = swap
            }
        }
    }

    // Result
    println("Общие элементы массивов A и B без повторений: $distinctC")
}