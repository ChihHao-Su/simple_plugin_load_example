#!/bin/sh


gcc core.cxx -fPIC -shared -lstdc++ -o libcore.so

gcc main.cxx -L./ -lstdc++ -ldl -lcore -o BS.exe

gcc p1.cxx -fPIC -shared -L./ -lstdc++ -lcore -o p1.so