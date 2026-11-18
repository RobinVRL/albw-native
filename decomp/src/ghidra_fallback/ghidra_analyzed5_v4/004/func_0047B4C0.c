#include "ghidra_types.h"

extern int func_0012E794(int param_1);
extern int func_001B6D8C(int param_1);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0066E7A0(undefined4 *param_1,char param_2);
extern undefined4 DAT_0047b57c;
extern int DAT_0047b580;
extern int *DAT_0047b584;

// USA 0047B4C0 <- EU 0047B498 (Ghidra, non-matching)
// GLOBAL DAT_0047b57c undefined4
// GLOBAL DAT_0047b580 int
// GLOBAL DAT_0047b584 int *

undefined4 func_0047B4C0(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(undefined4 *)(albw_frame + 0x4))
  if (*(char *)(param_1 + 0xd0) == '\x02') {
    cVar2 = '\v';
    puVar1 = (undefined4 *)(param_1 + 0xf0);
  }
  else {
    if ((4 < (int)*(char *)(*(int *)(param_1 + 500) + 0x3c) - 1U) &&
       (4 < (int)*(char *)(*(int *)(param_1 + 0x1f8) + 0x3c) - 1U)) goto LAB_0047b4f8;
    func_0066E7A0((undefined4 *)(param_1 + 0xf0),'\v');
    cVar2 = '\x02';
    puVar1 = (undefined4 *)(param_1 + 0xcc);
  }
  func_0066E7A0(puVar1,cVar2);
LAB_0047b4f8:
  if (*(char *)(param_1 + 0xd0) == '\x03') {
    func_0066E7A0((undefined4 *)(param_1 + 0xcc),'\0');
  }
  else if ((*(char *)(param_1 + 0xd0) == '\x01') && (*(char *)(param_1 + 0xf4) == '\0')) {
    func_0066E7A0((undefined4 *)(param_1 + 0xcc),'\0');
    local_c = DAT_0047b57c;
    local_10 = DAT_0047b580;
    func_00533078(param_1,&local_10,0);
  }
  func_0012E794(*DAT_0047b584);
  return func_001B6D8C(param_1);
}

