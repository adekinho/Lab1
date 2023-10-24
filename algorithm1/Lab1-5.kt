fun main() {
    println("Enter the length of the array A: ") //Sprashivaem dlinnu massiva A
    val m: Int = readlnOrNull()?.toInt()
        ?: 0 //readlnOrNull (funkcia protiv nullPointerExeption) ?: (Vse chto null prevrashayet v 0)

    println("Enter the length of an array B: ") //Sprashivaem dlinnu massivs B
    val n: Int = readlnOrNull()?.toInt()
        ?: 0 //readlnOrNull (funkcia protiv nullPointerExeption) ?: (Vse chto null prevrashayet v 0)

    val a = IntArray(m) //Ne dinamicheski massiv
    val b = IntArray(n)
    var c = IntArray(0)

    println("Enter the numbers in array A: ") //Elementy massiva A
    for (i in 0 until m) { //Cikl dlya sprashivaniya elementov massyva A
        a[i] = readlnOrNull()?.toInt() ?: 0
    }
    println("Enter the numbers in array B: ")
    for (i in 0 until n) { //Cikl dlya sprashivaniya elementov massiva B
        b[i] = readlnOrNull()?.toInt() ?: 0
    }

    c += a //Вы спрашивли как это работает a.plusAssign(b) Это просто конкатенация array в array и все
    c += b

    println("Enter the index at which you want to insert elements: ")
    val index = readlnOrNull()?.toInt() ?: 0

    println("Enter the number of elements you want to insert: ")
    val z: Int = readlnOrNull()?.toInt() ?: 0

    val d = IntArray(z)
    println("Enter the elements to insert into the array: ")
    for (i in 0 until z) {
        d[i] = readlnOrNull()?.toInt() ?: 0
    }

    val newArray = IntArray(c.size + z) //Создаем новый массив newArray и Размер массива с, к нему сумируем размер будущего массива d то есть z
    for (i in 0 until index) {
        newArray[i] = c[i] //Копируем Массив с в новый массив newArray.
    }
    for (i in 0 until z) {
        newArray[index + i] = d[i] //Сумируем Наш новый массив d к массиву newArray по указонному индексу.
    }
    for (i in index + z until newArray.size) {
        newArray[i] = c[i - z] //Копирует оставшиеся элементы с массива в newArray
    }
    for (i in c.indices) {
        c[i] = newArray[i] //Копирует элементы newArray в с массив
    }

    println("Array C: ${c.contentToString()}") //Вывод элементов с массива с новым блоком элементов добавленных по индексу
}
