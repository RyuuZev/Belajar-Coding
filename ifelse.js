let angka = 5;

if (angka >= 1000) {
    console.log(`ribuan`);
} else if (angka >= 100) {
    console.log(`ratusan`);
} else if (angka >= 10) {
    console.log(`puluhan`);
} else if (angka > 0 && angka < 10) {
    console.log(`satuan`);
} else if (angka == 0) {
    console.log(`Angka Nol`);
} else if (angka < 0) {
    console.log(`Angka negatif`);
} else {
    console.log(`ga valid`);
}


// versi dari satuan

let num = 100;

if (num < 10) {
    console.log(`satuan`);
} else if (num < 100) {
    console.log(`puluhan`);
} else if (num < 1000) {
    console.log(`ratusan`);
} else {
    console.log(`ribuan`);
}