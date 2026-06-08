public class forEach {
    static void main() {

        String[] array = {
                "Axioo", "Teknologi Informasi"
        };

        for (var i = 0; i < array.length; i++) {
            System.out.println(array[i]);
        }

        System.out.println("\n");
        // Lebih pendek pake : , ini artinya var value mengambil dalam array
        for (var value : array) {
            System.out.println(value);
        }
    }
}
