#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int DAT_003931c0;
extern undefined4 DAT_003931c4;
extern char s_SE_OBJ_FALL_003931b4[];

// USA 00393164 <- EU 00393140 (Ghidra, non-matching)
// GLOBAL DAT_003931c0 int
// GLOBAL DAT_003931c4 undefined4
// GLOBAL s_SE_OBJ_FALL_003931b4 string

void func_00393164(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  bool bVar4;
  bool bVar5;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
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
    local_c = s_SE_OBJ_FALL_003931b4;
    local_10 = DAT_003931c0;
    func_00150A84((int *)*param_1,&local_10,0);
  }
  *(undefined1 *)(param_1 + 3) = 0x2d;
  uVar2 = DAT_003931c4;
  puVar3 = (undefined4 *)param_1[2];
  *puVar3 = DAT_003931c4;
  puVar3[1] = uVar2;
  puVar3[2] = uVar2;
  *(undefined4 *)(param_1[2] + 4) = uVar2;
  return;
}

