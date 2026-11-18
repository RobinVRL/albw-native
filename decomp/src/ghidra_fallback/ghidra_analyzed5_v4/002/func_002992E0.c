// MAPFIX-INTEGRATED v1
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

// USA 002992E0 <- EU 002992BC (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)
// GLOBAL DAT_002993ec undefined4
// GLOBAL DAT_00299404 undefined4
// GLOBAL s_TagCameraTrailEvent_002993f0 string

undefined4 * func_002992E0(undefined4 *param_1,uint *param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x8))
  #define pcStack_14 (*(char * *)(albw_frame + 0xc))
  puVar2 = func_004ED00C(param_1,param_2);
  puVar3 = puVar2 + 200;
  *puVar2 = DAT_002993ec;
  puVar2[0xc9] = puVar3;
  puVar2[0xca] = 0;
  puVar2[0xcb] = 0;
  *puVar3 = puVar3;
  puVar2[0xcc] = 0;
  puVar3 = puVar2 + 0xce;
  puVar2[0xcd] = 0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar2[0xcb] = puVar3;
    *puVar3 = 0;
    puVar2[0xcc] = puVar3;
    puVar2[0xcd] = 1;
  }
  *(undefined1 *)(puVar2 + 0xd2) = 0;
  *(undefined1 *)((int)puVar2 + 0x349) = 0;
  *(undefined1 *)((int)puVar2 + 0x34a) = 0;
  *(undefined1 *)((int)puVar2 + 0x34b) = 0;
  puVar2[0xd3] = 0;
  puVar2[0xd4] = 0;
  *(undefined1 *)(puVar2 + 0xd5) = 0;
  puVar2[0xd6] = 0;
  *(char *)(puVar2 + 0xd7) = (char)(short)param_2[10];
  *(undefined1 *)((int)puVar2 + 0x35d) = 0;
  *(undefined1 *)((int)puVar2 + 0x35e) = 0;
  *(undefined1 *)((int)puVar2 + 0x35f) = 0;
  puVar2[0xdc] = 0;
  puVar2[0xdd] = 0;
  puVar2 = func_002E1BB4(puVar2 + 0xe6,0);
  puVar3 = puVar2 + -0xe6;
  bVar1 = func_00588BF0((int)puVar3,0);
  if (bVar1) {
    *(undefined1 *)((int)puVar2 + -0xc1) = 1;
  }
  else {
    puVar4 = (undefined4 *)func_0010BAB4(0x11c);
    uVar5 = 0;
    if (puVar4 != (undefined4 *)0x0) {
      pcStack_14 = s_TagCameraTrailEvent_002993f0;
      uStack_18 = DAT_00299404;
      uVar5 = func_002FCBCC(puVar4,&uStack_18,puVar2[-0x33],0,1);
    }
    puVar2[-0x10] = uVar5;
    puVar4 = (undefined4 *)func_0010BAB4(0x88);
    piVar6 = (int *)0x0;
    if (puVar4 != (undefined4 *)0x0) {
      piVar6 = func_002758CC(puVar4,(int *)param_2);
    }
    puVar2[-0x12] = piVar6;
    *(undefined1 *)(puVar2[-0x10] + 0x118) = 1;
    func_004ECF6C((int)puVar3);
  }
  return puVar3;
}

