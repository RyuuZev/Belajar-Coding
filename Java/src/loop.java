public class loop {
    static void main() {

        var counter = 1;
        while (true) {
            System.out.println("Perulangan " + counter);
            counter++;

            if (counter > 10) {
                break;
            }
        }
    }
}
