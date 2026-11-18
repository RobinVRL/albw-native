#include "ghidra_types.h"

extern int func_004F9FC4(int param_1,int param_2);
extern int func_004FC218(int param_1,char param_2,int param_3,ushort param_4);
extern undefined4 DAT_0012a4bc;
extern int DAT_0012a4c0;

// USA 0012A3DC <- EU 0012A3DC (Ghidra, non-matching)
// GLOBAL DAT_0012a4bc undefined4
// GLOBAL DAT_0012a4c0 int

int func_0012A3DC(int param_1,int param_2,int param_3)

{
  char cVar1;
  ushort uVar2;
  
  uVar2 = (ushort)DAT_0012a4bc;
  func_004FC218(param_1,'\v',-1,uVar2);
  cVar1 = *(char *)(param_3 + 0x24);
  if ((cVar1 != '\x02' && param_2 != 0x14) && (0 < *(short *)(DAT_0012a4c0 + param_1))) {
    if (cVar1 == '\t' || cVar1 == '\n') {
      func_004F9FC4(param_1,*(int *)(param_1 + 0x43c));
      func_004FC218(param_1,'\f',-1,uVar2);
    }
    if (*(char *)(param_3 + 0x24) == '\x03') {
      if (*(char *)(param_3 + 0x25) != '\x02') {
        return 0xf;
      }
      func_004FC218(param_1,'\f',-1,uVar2);
    }
    cVar1 = *(char *)(param_3 + 0x24);
    if ((cVar1 == '\v' || cVar1 == '\f') || cVar1 == '\x12') {
      func_004FC218(param_1,'\f',-1,uVar2);
    }
    return 0xf;
  }
  *(uint *)(param_1 + 0x5a0) = *(uint *)(param_1 + 0x5a0) | 0x80;
  return param_2;
}

