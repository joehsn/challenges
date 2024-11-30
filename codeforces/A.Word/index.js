const process = require("process");
const readline = require("readline");

/**
 * A program that changes the letters' register in every word so that it either
 * only consisted of lowercase letters or, vice versa, only of uppercase ones.
 */
function main() {
  const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout,
  });
  rl.on("line", (line) => {
    let word = line.trim();
    const caps = word.split("").filter((char) => char === char.toUpperCase());
    console.log(caps.length > (word.length - caps.length) ? word.toUpperCase() : word.toLowerCase());
    rl.close();
  });
}

main();
