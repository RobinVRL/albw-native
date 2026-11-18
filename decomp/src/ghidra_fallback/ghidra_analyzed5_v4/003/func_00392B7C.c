#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int DAT_00392bd8;
extern undefined4 DAT_00392bdc;
extern char s_SE_OBJ_FALL_00392bcc[];

// USA 00392B7C <- EU 00392B58 (Ghidra, non-matching)
// GLOBAL DAT_00392bd8 int
// GLOBAL DAT_00392bdc undefined4
// GLOBAL s_SE_OBJ_FALL_00392bcc string

void func_00392B7C(int *param_1,undefined1 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  bool bVar4;
  bool bVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  bVar4 = *param_1 != 0;
  cVar1 = '\0';
  if (bVar4) {
    cVar1 = *(char *)((int)param_1 + 0xd);
  }
  bVar5 = cVar1 != '\0';
  if (bVar4 && bVar5) {
    cVar1 = *(char *)((int)param_1 + 0xe);
  }
  if ((bVar4 && bVar5) && cVar1 != '\0') {
    local_14 = s_SE_OBJ_FALL_00392bcc;
    local_18 = DAT_00392bd8;
    func_00150A84((int *)*param_1,&local_18,0);
  }
  *(undefined1 *)(param_1 + 3) = param_2;
  uVar2 = DAT_00392bdc;
  puVar3 = (undefined4 *)param_1[2];
  *puVar3 = DAT_00392bdc;
  puVar3[1] = uVar2;
  puVar3[2] = uVar2;
  *(undefined4 *)(param_1[2] + 4) = uVar2;
  return;
}

