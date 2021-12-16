/*
Эквивалентны ли следующие фрагменты программы:
if (e1) if (e2) S1; else S2; неверно
if (e1) { if (e2) S1; else S2; } неверно
if (e1) { if (e2) S1; } else S2; верно
if (e1)  if (e2) S1; else ; else S2; верно
if (e1)  if (e2) S1; else S2; else ; неверно
*/