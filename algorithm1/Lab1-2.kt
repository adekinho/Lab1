fun main() {
    println("Enter the length of the array A: " ) //Sprashivaem dlinnu massiva A
    val m: Int = readlnOrNull()?.toInt() ?: 0 //readlnOrNull (funkcia protiv nullPointerExeption) ?: (Vse chto null prevrashayet v 0)

    println("Enter the length of an array B: ") //Sprashivaem dlinnu massivs B
    val n: Int = readlnOrNull()?.toInt() ?: 0 //readlnOrNull (funkcia protiv nullPointerExeption) ?: (Vse chto null prevrashayet v 0)

    val a = IntArray(m) //Ne dinamicheski massiv
    val b = IntArray(n)
    var c = IntArray(0)

    println("Enter the numbers in array A: ") //Elementy massiva A
    for (i in 0 until m) { //C'ikl dlya sprashivaniya elementov massyva A
        a[i] = readlnOrNull()?.toInt() ?:0
    }
    println("Enter the numbers in array B: ")
    for (i in 0 until n) { //C'ikl dlya sprashivaniya elementov massiva B
        b[i] = readlnOrNull()?.toInt() ?: 0
    }
    for (element in a) {  //Elementy kotorye A kotorye ne vklucheny v massiv B
        if (element !in b) { //Esli element ne v b. To c + element
            c += element
        }
    }
    print("Array C: ${c.contentToString()}") //Resultat, Poluchem massiv bez povtorenii minimal'nogo razmera
}