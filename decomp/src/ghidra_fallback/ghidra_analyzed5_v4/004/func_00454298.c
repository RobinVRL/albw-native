#include "ghidra_types.h"

extern int func_0012C718(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0066D168(undefined4 *param_1,undefined1 param_2);
extern int DAT_00454350;
extern float DAT_00454354;
extern undefined4 DAT_00454358;
extern char s_SE_S_DECIDE_S_0045435c[];

// USA 00454298 <- EU 00454270 (Ghidra, non-matching)
// GLOBAL DAT_00454350 int
// GLOBAL DAT_00454354 float
// GLOBAL DAT_00454358 undefined4
// GLOBAL s_SE_S_DECIDE_S_0045435c string

undefined4 func_00454298(int param_1)

{
  char cVar1;
  int iVar2;
  float fparam_0;
  int iVar3;
  bool bVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  iVar2 = DAT_00454350;
  if ((*(ushort *)(*(int *)(*(int *)(param_1 + 0x9c) + 0x14) + 0x16) & 4) == 0) {
    if ((*(ushort *)(*(int *)(param_1 + 0x14) + 0x16) & 0x80) != 0) {
      func_0066D168((undefined4 *)(param_1 + 0x74),2);
      local_14 = s_SE_S_DECIDE_S_0045435c;
      local_18 = iVar2;
      return func_00533078(param_1,&local_18,0);
    }
  }
  else {
    cVar1 = *(char *)(param_1 + 0xd);
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0xe);
    }
    if (bVar4 && cVar1 == '\x03') {
      *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x1c);
      *(undefined2 *)(param_1 + 0xb2) = 3;
      fparam_0 = DAT_00454354;
      *(undefined2 *)(param_1 + 0xb0) = 0;
      func_002317C0((undefined2 *)(param_1 + 0xb0),fparam_0);
      func_0012C718(param_1);
      iVar3 = *(int *)(param_1 + 0x9c);
      cVar1 = *(char *)(iVar3 + 0xd);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(iVar3 + 0xe);
      }
      if (bVar4 && cVar1 == '\x03') {
        func_0012C718(iVar3);
      }
      local_14 = (char *)DAT_00454358;
      local_18 = iVar2;
      func_00533078(param_1,&local_18,0);
    }
  }
  return 0;
}

