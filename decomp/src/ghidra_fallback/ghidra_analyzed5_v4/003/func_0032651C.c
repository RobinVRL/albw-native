#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D18(float *param_1,float *param_2,float *param_3);
extern int func_0026FC20(int param_1,int param_2,int *param_3,undefined4 *param_4);
extern int func_003249B4(int param_1);
extern int func_003C2630(int param_1);
extern int func_003C2808(int param_1);
extern int func_004CF478(int param_1,int param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern undefined4 uRam00326798;
extern undefined4 *puRam003267ac;
extern float DAT_00326794;
extern int *DAT_0032679c;
extern uint *DAT_003267a0;
extern undefined4 *DAT_003267a4;
extern undefined4 DAT_003267a8;
extern float *DAT_003267b0;
extern int *DAT_003267b4;

// USA 0032651C <- EU 003264F8 (Ghidra, non-matching)
// GLOBAL DAT_00326794 float
// GLOBAL DAT_0032679c int *
// GLOBAL DAT_003267a0 uint *
// GLOBAL DAT_003267a4 undefined4 *
// GLOBAL DAT_003267a8 undefined4
// GLOBAL DAT_003267b0 float *
// GLOBAL DAT_003267b4 int *
// GLOBAL UNK_00326798 undefined4
// GLOBAL UNK_003267ac undefined4 *

void func_0032651C(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  bool bVar5;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(int *)(albw_frame + 0x0))
  #define local_3c (*(float *)(albw_frame + 0x4))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0xc))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x18))
  #define afStack_24 ((float *)(albw_frame + 0x1c))
  switch(param_2) {
  case 0:
    *(float *)(param_1 + 0x3d4) = *(float *)(param_1 + 0x3d4) + DAT_00326794;
    *(undefined1 *)(*(int *)(param_1 + 0x49c) + 0x44) = 0;
    func_004CF478(*(int *)(param_1 + 0x490),0);
    break;
  case 1:
    *(undefined1 *)(*(int *)(param_1 + 0x49c) + 0x44) = 1;
    func_004CF478(*(int *)(param_1 + 0x490),1);
    uVar2 = uRam00326798;
    *(undefined4 *)(param_1 + 0x3dc) = uRam00326798;
    *(undefined4 *)(param_1 + 0x3e0) = uVar2;
    *(undefined4 *)(param_1 + 0x3e4) = uVar2;
    if (*(char *)(param_1 + 0x477) == '\0') {
      *(undefined1 *)(param_1 + 0x477) = 1;
    }
    break;
  case 2:
    puVar3 = (undefined4 *)func_0052FBA0(*DAT_0032679c + 0x3dbbc,*(uint *)(param_1 + 0x4a4));
    if (puVar3 != (undefined4 *)0x0) {
      if (((*DAT_003267a0 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_003267a0), iVar4 != 0)) {
        *DAT_003267a4 = DAT_003267a8;
      }
      iVar4 = (**(code **)*puVar3)(puVar3,DAT_003267a4);
      if (iVar4 == 0) {
        puVar3 = (undefined4 *)0x0;
      }
      if (puVar3 != (undefined4 *)0x0) {
        func_00115C70((float *)(param_1 + 0x480),(float *)(param_1 + 0x3d0),(float *)(puVar3 + 0xf4)
                     );
      }
    }
    *(undefined1 *)(*(int *)(param_1 + 0x49c) + 0x44) = 1;
    func_004CF478(*(int *)(param_1 + 0x490),1);
    break;
  case 3:
    *(undefined1 *)(param_1 + 0x478) = 0;
    break;
  case 4:
    *(undefined1 *)(*(int *)(param_1 + 0x49c) + 0x44) = 1;
    func_004CF478(*(int *)(param_1 + 0x490),1);
    *(undefined4 *)(param_1 + 0x4a4) = 0;
    break;
  case 5:
    *(undefined1 *)(*(int *)(param_1 + 0x49c) + 0x44) = 0;
    func_004CF478(*(int *)(param_1 + 0x490),1);
    *(undefined4 *)(param_1 + 0x4f0) = *puRam003267ac;
    func_003C2630(param_1 + 0x4b8);
    break;
  case 6:
    *(undefined1 *)(*(int *)(param_1 + 0x49c) + 0x44) = 1;
    func_004CF478(*(int *)(param_1 + 0x490),1);
    func_003C2808(param_1 + 0x4b8);
    break;
  case 7:
    func_003249B4(param_1);
    *(undefined1 *)(*(int *)(param_1 + 0x49c) + 0x44) = 0;
    func_004CF478(*(int *)(param_1 + 0x490),0);
  }
  bVar5 = *(char *)(*(int *)(param_1 + 0x490) + 0x30) != '\0';
  cVar1 = '\0';
  if (bVar5) {
    cVar1 = *(char *)(param_1 + 0x479);
  }
  if (bVar5 && cVar1 != '\0') {
    func_00115D18(afStack_24,(float *)(*(int *)(param_1 + 0x490) + 0x80),DAT_003267b0);
    func_00115C54(&local_30,afStack_24,(float *)(param_1 + 0x3d0));
    local_3c = local_30;
    uStack_38 = uStack_2c;
    uStack_34 = uStack_28;
    local_40 = *(int *)(param_1 + 0x2cc);
    func_0026FC20(*(int *)(*DAT_003267b4 + 4000),0xb,&local_40,&local_3c);
  }
  *(char *)(param_1 + 0x48c) = (char)param_2;
  return;
}

