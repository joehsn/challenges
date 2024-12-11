const process = require("process");
const readline = require("readline");

/**
 * A program that prints "YES" if n is a nearly lucky number. Otherwise, print
 * "NO" (without the quotes). A "nearly lucky" number cosists of either 4 or 7,
 * and their length is either 4 or 7.
 */

function main() {
  const rl = readline.createInterface({
    input: process.stdin,
    output: process.stderr,
  });
  rl.on("line", (line) => {
    let nStr = line.trim();
    let luckies = nStr.split("").filter(char => char === "4" || char === "7");
    console.log(luckies.length == 4 || luckies.length == 7 ? "YES" : "NO");
    rl.close();
  });
}

main();
