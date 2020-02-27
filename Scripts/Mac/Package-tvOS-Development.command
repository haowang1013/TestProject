#!/bin/bash

CURR_DIR=$(dirname "$0")

export Platform=TVOS
export ClientConfig=Development

$CURR_DIR/DoPackageGame.command
