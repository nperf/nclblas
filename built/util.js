"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
exports.prefix = function (x) {
    if (x instanceof Float64Array) {
        return 'd';
    }
    if (x instanceof Float32Array) {
        return 's';
    }
    throw new Error('invalid type!');
};
