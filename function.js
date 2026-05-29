function sayHBD (name, age) {
    console.log('Selamat ulang tahun ke ' + age + ' ' + name + '!');
};

sayHBD('Pasya', 19);


function cekAngka (angka) {
    if (angka > 0) {
        console.log('Positif');
    } else if (angka == 0) {
        console.log('Netral');
    } else if (angka < 0) {
        console.log('Negatif');
    } else {
        console.log('Bukan angka');
    }
};

cekAngka(-1);
cekAngka(0);
cekAngka(1);
cekAngka('Anjay');


function fungsiTambah (a, b) {
    hasil = a + b;
    console.log(`${a} ditambah ${b} sama dengan ${hasil}`)
};

fungsiTambah(1, 1);
fungsiTambah(1, 11);


const firstName = 'Muhammad';
const lastName = 'Pasya';

function getFullName(firstName, lastName) {
    const fullName = firstName + ' ' + lastName;
    return fullName; // di sini return berfungsi mengembalikan nilai, jika tidak hasilnya akan undefined
};

const namaLengkap = getFullName(firstName, lastName);
console.log(namaLengkap);

// Simpelnya karena global scope tidak bisa mengakses block scope, maka harus ditulis return 
// contoh lagi

function getString() {
    return 'KATA';
};

const coba = getString();
console.log(coba) // hasilnya akan "KATA"


function get2Angka(x, y) {
    return x * y;
};

const Hasil = get2Angka(2, 22);
console.log(Hasil)

console.log(get2Angka(10, 10));


// Arrow function

const sayBye = name => {
    console.log("Bye, " + name);
};

const add = (x, y) => x + y;

console.log(add(10, 5));


const namaUmur = (name, num) => name + num;

const iniDia = namaUmur('pasya', 2)

console.log(iniDia.name)