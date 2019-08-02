import java.util.Scanner

fun main(args: Array<String>){
    val a, x, y

    val reader = Scanner(System.`in`)
    var a:Int = reader.nextInt()
    var x:Int = reader.nextInt()
    var y:Int = reader.nextInt()

    if(x < 0 or y < 0){
        println("2")
    } else if(x > a or y > a){
        println("2")
    } else if(x == a or y == a){
        println("1")
    } else{
        println("0")
    }

}
