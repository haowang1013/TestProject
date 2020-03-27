#!/bin/bash

CURR_DIR=$(dirname "$0")

export Platform=IOS
export ClientConfig=Shipping

$CURR_DIR/DoPackageGame.command
