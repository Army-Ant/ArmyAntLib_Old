#!/usr/bin/env bash
# Created by Jason 3/4/2016
# This is a shell script file used to do something after built in cmake project

function ArmyAntLib_AfterBuilt()
{
    if [$1 = "debug"]; then
    cp -avx bin/Debug/* ../LibOut/bin/
    else
    cp -avx bin/Release/* ../LibOut/bin/
    fi
    return 0;
}

ArmyAntLib_AfterBuilt $1 $2 $3