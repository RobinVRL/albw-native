#include "ghidra_types.h"

extern int func_003E6AA8(int param_1,uint param_2,int param_3,undefined4 param_4,...);
extern int func_003FD944(int param_1,uint param_2,uint *param_3);
extern int func_003FDB08(int param_1,uint *param_2);
extern undefined4 DAT_003ff184;
extern undefined4 DAT_003ff188;

// USA 003FF0D8 <- EU 003FF0B8 (Ghidra, non-matching)
// GLOBAL DAT_003ff184 undefined4
// GLOBAL DAT_003ff188 undefined4

int func_003FF0D8(int param_1,undefined4 param_2,char *param_3,undefined4 *param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  _Alignas(8) unsigned char albw_frame[0x130];
  #define local_130 (*(char * *)(albw_frame + 0x0))
  #define local_12c (*(char * *)(albw_frame + 0x4))
  #define pcStack_128 (*(char * *)(albw_frame + 0x8))
  #define auStack_120 ((uint *)(albw_frame + 0x10))
  #define local_20 (*(char *)(albw_frame + 0x110))
  #define local_1f (*(undefined1 *)(albw_frame + 0x111))
  #define local_1e (*(undefined1 *)(albw_frame + 0x112))
  #define local_1d (*(undefined1 *)(albw_frame + 0x113))
  #define local_1c (*(undefined1 *)(albw_frame + 0x114))
  local_20 = (char)((uint)param_2 >> 0x18);
  local_1f = (undefined1)((uint)param_2 >> 0x10);
  local_1e = (undefined1)((uint)param_2 >> 8);
  local_1d = (undefined1)param_2;
  local_1c = 0;
  cVar1 = *(char *)(param_1 + 0x3c);
  local_130 = &local_20;
  bVar4 = cVar1 == '.';
  if (bVar4) {
    cVar1 = *(char *)(param_1 + 0x3d);
  }
  if (bVar4 && cVar1 == '\0') {
    local_12c = param_3;
    func_003E6AA8((int)auStack_120,0x100,0xff,DAT_003ff188);
  }
  else {
    local_12c = local_130;
    local_130 = (char *)(param_1 + 0x3c);
    pcStack_128 = param_3;
    func_003E6AA8((int)auStack_120,0x100,0xff,DAT_003ff184);
  }
  uVar2 = func_003FDB08(param_1 + 4,auStack_120);
  if (uVar2 == 0xffffffff) {
    iVar3 = 0;
  }
  else {
    local_130 = (char *)0x0;
    local_12c = (char *)0x0;
    iVar3 = func_003FD944(param_1 + 4,uVar2,(uint *)&local_130);
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = local_12c;
    }
  }
  return iVar3;
}

