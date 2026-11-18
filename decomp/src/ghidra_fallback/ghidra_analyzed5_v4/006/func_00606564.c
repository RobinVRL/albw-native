#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_002758CC(undefined4 *param_1,int *param_2);
extern int func_002E1BB4(undefined4 *param_1,undefined2 param_2);
extern int func_002FCBCC(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4, undefined1 param_5);
extern int func_004ECF6C(int param_1);
extern int func_004ED00C(undefined4 *param_1,uint *param_2);
extern int func_00588BF0(int param_1,int param_2);
extern undefined4 DAT_002993ec;
extern undefined4 DAT_00299404;
extern char s_TagCameraTrailEvent_002993f0[];

// USA 00606564 <- EU 0060653C (Ghidra, non-matching)
// GLOBAL DAT_002993ec undefined4
// GLOBAL DAT_00299404 undefined4
// GLOBAL s_TagCameraTrailEvent_002993f0 string

int func_00606564(uint *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x8))
  #define pcStack_14 (*(char * *)(albw_frame + 0xc))
  puVar6 = (undefined4 *)func_0010BAB4(0x3a0);
  if (puVar6 == (undefined4 *)0x0) {
    return 0;
  }
  puVar6 = func_004ED00C(puVar6,param_1);
  puVar2 = puVar6 + 200;
  *puVar6 = DAT_002993ec;
  puVar6[0xc9] = puVar2;
  puVar6[0xca] = 0;
  puVar6[0xcb] = 0;
  *puVar2 = puVar2;
  puVar6[0xcc] = 0;
  puVar2 = puVar6 + 0xce;
  puVar6[0xcd] = 0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar6[0xcb] = puVar2;
    *puVar2 = 0;
    puVar6[0xcc] = puVar2;
    puVar6[0xcd] = 1;
  }
  *(undefined1 *)(puVar6 + 0xd2) = 0;
  *(undefined1 *)((int)puVar6 + 0x349) = 0;
  *(undefined1 *)((int)puVar6 + 0x34a) = 0;
  *(undefined1 *)((int)puVar6 + 0x34b) = 0;
  puVar6[0xd3] = 0;
  puVar6[0xd4] = 0;
  *(undefined1 *)(puVar6 + 0xd5) = 0;
  puVar6[0xd6] = 0;
  *(char *)(puVar6 + 0xd7) = (char)(short)param_1[10];
  *(undefined1 *)((int)puVar6 + 0x35d) = 0;
  *(undefined1 *)((int)puVar6 + 0x35e) = 0;
  *(undefined1 *)((int)puVar6 + 0x35f) = 0;
  puVar6[0xdc] = 0;
  puVar6[0xdd] = 0;
  puVar6 = func_002E1BB4(puVar6 + 0xe6,0);
  puVar2 = puVar6 + -0xe6;
  bVar1 = func_00588BF0((int)puVar2,0);
  if (bVar1) {
    *(undefined1 *)((int)puVar6 + -0xc1) = 1;
  }
  else {
    puVar3 = (undefined4 *)func_0010BAB4(0x11c);
    uVar4 = 0;
    if (puVar3 != (undefined4 *)0x0) {
      pcStack_14 = s_TagCameraTrailEvent_002993f0;
      uStack_18 = DAT_00299404;
      uVar4 = func_002FCBCC(puVar3,&uStack_18,puVar6[-0x33],0,1);
    }
    puVar6[-0x10] = uVar4;
    puVar3 = (undefined4 *)func_0010BAB4(0x88);
    piVar5 = (int *)0x0;
    if (puVar3 != (undefined4 *)0x0) {
      piVar5 = func_002758CC(puVar3,(int *)param_1);
    }
    puVar6[-0x12] = piVar5;
    *(undefined1 *)(puVar6[-0x10] + 0x118) = 1;
    func_004ECF6C((int)puVar2);
  }
  return (int)puVar2;
}

