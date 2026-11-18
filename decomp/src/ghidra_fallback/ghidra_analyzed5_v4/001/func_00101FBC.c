#include "ghidra_types.h"

extern int func_00104164(undefined4 *param_1,int param_2);
extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int *DAT_00102068;
extern undefined4 DAT_0010206c;

// USA 00101FBC <- EU 00101FBC (Ghidra, non-matching)
// GLOBAL DAT_00102068 int *
// GLOBAL DAT_0010206c undefined4

int func_00101FBC(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  piVar1 = DAT_00102068;
  if (*DAT_00102068 == 0) {
    puVar2 = (undefined4 *)func_0010CEE0(0x40,param_1,4);
    if (puVar2 == (undefined4 *)0x0) {
      piVar1[1] = 0;
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar3 = func_0010DA7C(puVar2,param_1,3);
      *puVar3 = DAT_0010206c;
      piVar1[1] = (int)puVar3;
      puVar2[4] = 0;
      *(undefined1 *)(puVar2 + 5) = 0;
      *(undefined1 *)((int)puVar2 + 0x15) = 0;
      *(undefined1 *)((int)puVar2 + 0x16) = 0;
      *(undefined1 *)((int)puVar2 + 0x17) = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[8] = 0;
      func_0010B3EC(puVar2 + 6,4,(int)(puVar2 + 9));
      puVar2[0xd] = 0xf;
      puVar2[0xe] = 0;
      puVar2[0xf] = 0;
      func_00104164(puVar2 + 0xe,0);
    }
    *piVar1 = (int)puVar2;
  }
  return *piVar1;
}

