#!/usr/bin/env python3

import configparser
from rdoclient import RandomOrgClient

cpr = configparser.ConfigParser()
cpr.read("que.ini")

NSTUDENTS = int(cpr['class']['students'])
NQUESTIONS =  int(cpr['course']['questions'])
APIKEY = cpr['randorg']['api_key']
r: RandomOrgClient = RandomOrgClient(APIKEY)

if NQUESTIONS < NSTUDENTS * 2:
    print("Repeating questions are not yet implemented")
    quit(1)

shuffled: list[int] = r.generate_integer_sequences(1, NSTUDENTS * 2, 1, NQUESTIONS, False)[0]

for q1, q2 in zip(shuffled[:NSTUDENTS], shuffled[NSTUDENTS:]):
    if q1 > q2:
        q1, q2 = q2, q1
    print(q1, q2, sep='\t')
