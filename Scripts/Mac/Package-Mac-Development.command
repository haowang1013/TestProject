#!/bin/bash

CURR_DIR=$(dirname "$0")

export Platform=Mac
export ClientConfig=Development

$CURR_DIR/DoPackageGame.command
