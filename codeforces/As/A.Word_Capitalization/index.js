const readline = require("readline");
const process = require("process");

/**
 *
 */

function main() {
  const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout,
  })
  rl.on("line", (line) => {
    const chars = line.trim().split("");
    chars[0] = chars[0].toUpperCase();
    console.log(chars.join(""));
    rl.close()
  })
}

main();
