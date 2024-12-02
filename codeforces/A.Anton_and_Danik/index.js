const process = require("process");
const readline = require("readline");


/**
 * A program that prints "Anton" If Anton won more games than Danik, prints
 * "Danik" If Danik won more games than Anton and prints "Friendship" it's a
 * tie.
 */

function main() {
  const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout,
  });
  let count = 2;
  rl.on("line", (line) => {
    if (count == 1) {
      let word = line.trim();
      let Ds = word.split("").filter(c => c === 'D').length;
      let As = word.length - Ds;
      console.log(Ds > As ? "Danik" : As > Ds ? "Anton" : "Friendship")
    }
    count--;
    if (count == 0) {
      rl.close();
    }
  });
}

main();
