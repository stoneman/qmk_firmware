#!/bin/bash

set -ex

make ergodox_ez:stoneman

wally-cli ergodox_ez_stoneman.hex
