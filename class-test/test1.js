#!/usr/bin/env node

const fs = require("fs");

async function loadWasm(filename) {
  const bytes = new Uint8Array(fs.readFileSync(filename));
  const wasm = await WebAssembly.instantiate(bytes, {});
  return wasm;
}

async function main() {
  if( process.argv.length != 3 ) {
    console.log(`Usage: ${process.argv[1]} <wasm>`);
    return;
  }
  const filename = process.argv[2];
  const wasm = await loadWasm(filename);

  let n = wasm.instance.exports.func();
  console.log(`func() returned ${n}`);
  n = wasm.instance.exports.func();
  console.log(`func() returned ${n}`);
}

(async () => await main())();
