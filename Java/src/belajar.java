import java.util.Arrays;

public class belajar {

    static void main() {

        System.out.println("Halo!");

        var Teks = "Namaku Pasya!";

        System.out.println(Teks);

        var firstName = "Muhammad";
        var middleName = "Kurniawan";
        var lastName = "Pasya";

        System.out.println(firstName);
        System.out.println(middleName);
        System.out.println(lastName);

        var fullName = firstName + " " + middleName + " " + lastName + "!";

        System.out.println("Halo Namaku " + fullName);

        System.out.println("Array sebelum disorting");

        int[] arr = {1, 3, 4, 2, 5};

        System.out.println(Arrays.toString(arr));

        Arrays.sort(arr);

        System.out.println("Array setelah disorting");
        System.out.println(Arrays.toString(arr));

    }
}