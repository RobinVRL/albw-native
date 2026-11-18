// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004ED46C(int param_1,int param_2);
extern int func_004F88A0(int *param_1,undefined2 *param_2);
extern int func_004F9554(int param_1,ushort param_2,ushort param_3,int param_4);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern float func_004FAD90(int param_1);
extern int func_00556E64(int param_1);
extern int func_0068C690(float *param_1);
extern int iRam00353f58;
extern int iRam00353f78;
extern int iRam00353f8c;
extern undefined4 uRam00353f54;
extern undefined4 uRam00353f90;
extern int *piRam00353f7c;
extern undefined4 DAT_00353f48;
extern int *DAT_00353f4c;
extern undefined4 DAT_00353f50;
extern char s_ReactStun_00353f80[];
extern char s_SE_KnuckleMaster_HIT_WALL_00353f5c[];

// USA 00353DC4 <- EU 00353DA0 (Ghidra, non-matching)
// GLOBAL DAT_00353f48 undefined4
// GLOBAL DAT_00353f4c int *
// GLOBAL DAT_00353f50 undefined4
// GLOBAL UNK_00353f54 undefined4
// GLOBAL UNK_00353f58 int
// GLOBAL UNK_00353f78 int
// GLOBAL UNK_00353f7c int *
// GLOBAL UNK_00353f8c int
// GLOBAL UNK_00353f90 undefined4
// GLOBAL s_ReactStun_00353f80 string
// GLOBAL s_SE_KnuckleMaster_HIT_WALL_00353f5c string

void func_00353DC4(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define iStack_20 (*(int *)(albw_frame + 0x0))
  #define pcStack_1c (*(char * *)(albw_frame + 0x4))
  *(undefined4 *)(param_1 + 0x9dc) = DAT_00353f48;
  uVar4 = DAT_00353f50;
  if ((*(int *)(param_1 + 0x3a0) != *(int *)(param_1 + 0x8c0)) &&
     (*(char *)(param_1 + 0xa61) != '\x04')) {
    iVar3 = *DAT_00353f4c;
    *(undefined4 *)(param_1 + 0x3dc) = DAT_00353f50;
    *(undefined4 *)(param_1 + 0x3e0) = uVar4;
    *(undefined4 *)(param_1 + 0x3e4) = uVar4;
    *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xffffff7f;
    func_004FABDC(param_1,7,0xffffffff,0);
    func_004F88A0((int *)param_1,*(undefined2 **)(param_1 + 0x8c0));
    func_004F9554(*(int *)(param_1 + 0x430),0,0,1);
    func_004F9554(*(int *)(param_1 + 0x434),0,0,1);
    func_004FAD90(param_1);
    if ((iVar3 == 0) || (bVar1 = func_00556E64(iVar3), uVar4 = uRam00353f90, bVar1)) {
      uVar4 = uRam00353f54;
      *(undefined4 *)(param_1 + 0xa2c) = 0xb4;
    }
    else {
      *(undefined4 *)(param_1 + 0xa2c) = 0x3c;
    }
    *(undefined4 *)(param_1 + 0xa30) = uVar4;
    *(undefined4 *)(param_1 + 0xa28) = 0;
    iStack_20 = iRam00353f78;
    *(undefined2 *)(iRam00353f58 + param_1) = 0;
    pcStack_1c = s_SE_KnuckleMaster_HIT_WALL_00353f5c;
    func_00150A84((int *)param_1,&iStack_20,0);
    func_004ED46C(*piRam00353f7c,7);
    iVar3 = func_0068C690((float *)(param_1 + 0xb74));
    *(int *)(param_1 + 0xa58) = iVar3 + -0x80000000;
    piVar2 = (int *)(param_1 + 0xa80);
    if (*(int *)(param_1 + 0x344) == 0) {
      *piVar2 = 0;
      *(undefined4 *)(param_1 + 0xa84) = 0;
    }
    else {
      iVar3 = *piVar2;
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0x1c) == *(int *)(param_1 + 0xa84))) {
        func_00110848(iVar3);
      }
      func_004A1B9C(&iStack_20,*(int *)(param_1 + 0x344),(uint *)s_ReactStun_00353f80);
      *piVar2 = iStack_20;
      *(char **)(param_1 + 0xa84) = pcStack_1c;
    }
    *(int *)(param_1 + 0x9e4) = (int)*(short *)(iRam00353f8c + param_1);
  }
  return;
}

