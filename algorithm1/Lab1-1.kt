fun main(args: Array<String>) { //Adilet Mukhamedgalym
    println("Enter the length of the array A: " ) //Sprashivaem dlinnu massiva A
    val m: Int = readlnOrNull()?.toInt() ?: 0 //readlnOrNull (funkcia protiv nullPointerExeption) ?: (Vse chto null prevrashayet v 0)

    println("Enter the length of an array B: ") //Sprashivaem dlinnu massivs B
    val n: Int = readlnOrNull()?.toInt() ?: 0 //readlnOrNull (funkcia protiv nullPointerExeption) ?: (Vse chto null prevrashayet v 0)

    val a = IntArray(m) //Ne dinamicheski massiv
    val b = IntArray(n)
    var c = IntArray(0)

    println("Enter the numbers in array A: ") //Elementy massiva A
    for (i in 0 until m) { //Cikl dlya sprashivaniya elementov massyva A
        a[i] = readlnOrNull()?.toInt() ?:0
    }
    println("Enter the numbers in array B: ")
    for (i in 0 until n) { //Cikl dlya sprashivaniya elementov massiva B
        b[i] = readlnOrNull()?.toInt() ?: 0
    }
    c += a //Sumiruyem A massiv k C massivu
    c += b //Sumiruyem B massiv k C massivu
    val distinctC = c.distinct() //Smotrim esli est povtornye elementy v massive C
    print("Array C: ")
    print(distinctC) //Resultat, Poluchem massiv bez povtorenii minimal'nogo razmera
}
