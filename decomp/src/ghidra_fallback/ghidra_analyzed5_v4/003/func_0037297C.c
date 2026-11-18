#include "ghidra_types.h"

extern int func_0062B014(int *param_1,int param_2);
extern int *DAT_003729f4;

// USA 0037297C <- EU 00372958 (Ghidra, non-matching)
// GLOBAL DAT_003729f4 int *

void func_0037297C(int *param_1)

{
  char cVar1;
  undefined1 uVar2;
  int *piVar3;
  
  func_0062B014(param_1,1);
  piVar3 = DAT_003729f4;
  cVar1 = (char)param_1[0x263];
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      if (*(char *)((int)param_1 + 0x98a) == '\0') {
        *(undefined1 *)((int)param_1 + 0x98a) = 1;
      }
      if (*(char *)(*piVar3 + 0x70) != '\t') {
        uVar2 = 2;
        goto LAB_003729c4;
      }
    }
    else {
      if (cVar1 == '\x02') {
        if (*(char *)(*DAT_003729f4 + 0x2ee) != '\x02') {
          if (*(char *)(*DAT_003729f4 + 0x70) == '\t') {
            *(undefined1 *)(param_1 + 0x263) = 0;
          }
          return;
        }
        uVar2 = 3;
LAB_003729c4:
        *(undefined1 *)(param_1 + 0x263) = uVar2;
        return;
      }
      if (cVar1 == '\x03') {
        piVar3 = (int *)(uint)*(byte *)((int)param_1 + 0x98b);
      }
      if (cVar1 == '\x03' && piVar3 == (int *)0x0) {
        *(undefined1 *)((int)param_1 + 0x98b) = 1;
      }
    }
  }
  return;
}

