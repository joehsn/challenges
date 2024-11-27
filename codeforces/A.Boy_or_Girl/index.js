const process = require("process");
const readline = require("readline")

/**
 * A program that prints "CHAT WITH HER!" (without the quotes) if
 * the given username is of a female, otherwise, print "IGNORE HIM!"
 * (without the quotes).
 */

function main() {
  const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout,
  });
  rl.on("line", (line) => {
    const word = line.trim();
    const unqi = new Set(word.split(""));
    if (unqi.size % 2 == 0) {
      console.log("CHAT WITH HER!");
    } else {
      console.log("IGNORE HIM!");
    }
  });
}

main();
