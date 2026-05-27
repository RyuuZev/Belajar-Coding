let Apel = 5000;
let Pisang = 10000;
let diskon = 10000;

const totalHarga = (Apel * 3) + (Pisang * 2);

console.log(`\nHarga apel adalah Rp.${Apel  } dan harga pisang adalah Rp.${Pisang}`);
console.log(`Pembeli ingin membeli 3 apel dan 2 pisang, maka total harga yang harus dibayar adalah Rp.${totalHarga}`);
console.log(`Dan pembeli juga mendapatkan diskon sebesar Rp${diskon}\n`);

const totalHargaDiskon = totalHarga - diskon;

console.log(`Jadi total harganya adalah Rp.${totalHargaDiskon}`);

// Versi Persen

const totalHargaDiskonPersen = totalHarga - (totalHarga * 10 / 100);
//atau 
const totalHargaDiskonPerson2 = totalHarga - totalHarga * 0.1;

console.log(totalHargaDiskonPersen);
console.log(totalHargaDiskonPerson2);