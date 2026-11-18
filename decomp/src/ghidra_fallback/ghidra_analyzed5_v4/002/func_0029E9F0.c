#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_001515F8(undefined4 *param_1,uint *param_2);
extern int func_0019B04C(uint param_1);
extern int func_002C40E4(int *param_1,int param_2);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_003521F0(int param_1,undefined4 param_2);
extern int func_004356B4(int *param_1);
extern float func_0049216C(float *param_1,uint *param_2,float *param_3);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004C43E0(int param_1,int *param_2);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004ED620(int param_1,int param_2);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_0052138C(int param_1,char *param_2);
extern int func_0054D964(int param_1,uint param_2);
extern int DAT_0029edac;
extern int DAT_0029edb0;
extern undefined4 DAT_0029edb4;
extern undefined4 DAT_0029edb8;
extern int *DAT_0029edbc;
extern float DAT_0029edc0;
extern float DAT_0029edc4;
extern int *DAT_0029edc8;
extern uint *DAT_0029edcc;
extern float *DAT_0029edd0;
extern float DAT_0029edd4;
extern float DAT_0029edd8;
extern int *DAT_0029eddc;
extern int *DAT_0029ede0;
extern int DAT_0029ede4;
extern int *DAT_0029ede8;
extern float DAT_0029edec;

// USA 0029E9F0 <- EU 0029E9CC (Ghidra, non-matching)
// GLOBAL DAT_0029edac int
// GLOBAL DAT_0029edb0 int
// GLOBAL DAT_0029edb4 undefined4
// GLOBAL DAT_0029edb8 undefined4
// GLOBAL DAT_0029edbc int *
// GLOBAL DAT_0029edc0 float
// GLOBAL DAT_0029edc4 float
// GLOBAL DAT_0029edc8 int *
// GLOBAL DAT_0029edcc uint *
// GLOBAL DAT_0029edd0 float *
// GLOBAL DAT_0029edd4 float
// GLOBAL DAT_0029edd8 float
// GLOBAL DAT_0029eddc int *
// GLOBAL DAT_0029ede0 int *
// GLOBAL DAT_0029ede4 int
// GLOBAL DAT_0029ede8 int *
// GLOBAL DAT_0029edec float

int * func_0029E9F0(undefined4 *param_1,uint *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  ushort uVar8;
  int *piVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  _Alignas(8) unsigned char albw_frame[0x2f0];
  #define local_2f0 ((byte *)(albw_frame + 0x0))
  #define local_2ec (*(undefined4 *)(albw_frame + 0x4))
  #define local_2e8 (*(undefined2 *)(albw_frame + 0x8))
  #define local_2e6 (*(undefined1 *)(albw_frame + 0xa))
  #define local_2e4 (*(uint *)(albw_frame + 0xc))
  #define local_2e0 (*(float *)(albw_frame + 0x10))
  #define local_2dc (*(float *)(albw_frame + 0x14))
  #define afStack_2d4 ((float *)(albw_frame + 0x1c))
  #define local_2c8 (*(undefined4 *)(albw_frame + 0x28))
  #define local_2c4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_2c0 (*(undefined4 *)(albw_frame + 0x30))
  #define local_2ba (*(undefined2 *)(albw_frame + 0x36))
  #define local_2b8 (*(undefined2 *)(albw_frame + 0x38))
  #define local_29c (*(undefined4 *)(albw_frame + 0x54))
  #define local_298 (*(int *)(albw_frame + 0x58))
  #define local_24 (*(undefined4 *)(albw_frame + 0x2cc))
  piVar2 = func_001515F8(param_1,param_2);
  iVar6 = DAT_0029edac;
  piVar2[200] = DAT_0029edac + 0x5c;
  *piVar2 = iVar6;
  piVar2[0x11b] = 0;
  piVar2[0x11c] = 0;
  piVar2[0x11d] = 0;
  piVar2[0x11f] = 0;
  *(undefined1 *)(piVar2 + 0x120) = 0;
  piVar9 = piVar2 + 0x11b;
  if ((*(ushort *)((int)piVar2 + 0x2e) & 0xff) == 0) {
    if ((((*(short *)((int)piVar2 + 0x32) != 0) && (*(short *)((int)piVar2 + 0x32) == 1)) &&
        (cVar1 = (char)*(undefined2 *)((int)piVar2 + 0x42), cVar1 != '\x01')) && (cVar1 != '\0')) {
      piVar3 = (int *)func_0054D964((int)piVar2,3);
      iVar6 = piVar2[0x105];
      piVar3[1] = *(int *)(iVar6 + 4);
      piVar3[2] = *(int *)(iVar6 + 8);
      piVar3[3] = *(int *)(iVar6 + 0xc);
      func_004356B4(piVar3);
      local_2e0 = ALBW_AS_F32(CONCAT22((*(undefined2 *)((char *)&local_2e0 + 2)),0xa4));
      *(undefined2 *)(piVar3 + 10) = 0xa4;
      piVar2[0x11c] = (int)piVar3;
      puVar4 = (undefined4 *)func_0010BAB4(0x48);
      puVar5 = (undefined4 *)0x0;
      if (puVar4 != (undefined4 *)0x0) {
        puVar5 = func_004EDC9C(puVar4);
        *puVar5 = DAT_0029edb8;
      }
      piVar2[0x11b] = (int)puVar5;
      puVar5[6] = piVar2[0x11c];
      local_2e4 = piVar2[0xb3];
      func_004EDAD0(*piVar9,&local_2e4);
      *(undefined2 *)(*piVar9 + 0x2c) = 0xff9c;
      func_004A879C(*DAT_0029edbc,*piVar9,5);
    }
  }
  else if ((*(ushort *)((int)piVar2 + 0x2e) & 0xff) == 1) {
    local_2e4 = CONCAT22((*(undefined2 *)((char *)&local_2e4 + 2)),(short)DAT_0029edb4);
    *(short *)(DAT_0029edb0 + (int)piVar2) = (short)DAT_0029edb4;
  }
  local_2e8 = 0;
  local_2f0[0] = 0;
  local_2ec = 0;
  local_2e6 = 0;
  iVar6 = func_0052138C((int)piVar2,(char *)local_2f0);
  fVar12 = DAT_0029edc4;
  fVar13 = DAT_0029edc0;
  if (iVar6 == 0) {
LAB_0029ec40:
    if ((*(ushort *)((int)piVar2 + 0x2e) & 0xff) != 5) goto LAB_0029ed5c;
  }
  else {
    bVar10 = *(byte *)(*DAT_0029edc8 + 0x18) < 2;
    uVar8 = *(ushort *)((int)piVar2 + 0x2e) & 0xff;
    if (uVar8 == 1 || uVar8 == 4) goto LAB_0029ec40;
    if (uVar8 != 5) {
      if ((bool)(local_2f0[0] < 2 & ~bVar10)) {
        iVar6 = 1;
      }
      else {
        if (!(bool)(bVar10 & ~(local_2f0[0] < 2))) goto LAB_0029ed5c;
        iVar6 = 2;
      }
      local_2c4 = 0;
      local_2c0 = 0;
      local_2c8 = 0;
      local_29c = 0;
      local_298 = 0;
      local_24 = 0;
      func_002DFF7C(&local_2e4);
      local_2e4 = func_0019B04C(*DAT_0029edcc);
      fVar11 = fVar13;
      if (iVar6 != 1) {
        fVar11 = fVar12;
      }
      func_004D80A4(&local_2e0,piVar2[0xfa],fVar11);
      local_2dc = fVar12;
      func_00115C54(&local_2e0,&local_2e0,(float *)(piVar2 + 0xf4));
      fVar11 = DAT_0029edd4;
      if (iVar6 != 1) {
        fVar11 = DAT_0029edd8;
      }
      func_00115D70(afStack_2d4,DAT_0029edd0,fVar11);
      if (iVar6 == 1) {
        local_2ba = 4;
      }
      else {
        local_2ba = 1;
      }
      local_2b8 = 1;
      local_298 = piVar2[0xb3];
      func_004C43E0(*DAT_0029eddc,(int *)&local_2e4);
      goto LAB_0029ec40;
    }
  }
  local_2e0 = ALBW_AS_F32(piVar2[0xfa]);
  local_2e4 = 0;
  local_2dc = 0.0;
  func_0049216C((float *)(piVar2 + 0x10c),&local_2e4,(float *)(piVar2 + 0xf4));
  func_002C40E4(piVar2 + 200,(int)piVar2);
  uVar7 = 0;
  switch((short)piVar2[0xc]) {
  case 1:
    uVar7 = 1;
    break;
  case 2:
    uVar7 = 2;
    break;
  case 3:
    uVar7 = 3;
    break;
  case 4:
    uVar7 = 4;
    break;
  case 5:
  case 7:
    uVar7 = 5;
    break;
  case 6:
  case 8:
    uVar7 = 6;
    break;
  case 9:
  case 0xb:
    uVar7 = 7;
    break;
  case 10:
  case 0xc:
    uVar7 = 8;
  }
  func_003521F0((int)(piVar2 + 0xc9),uVar7);
  iVar6 = DAT_0029ede4;
  *(bool *)(piVar2 + 0x120) = (char)param_2[0x16] != '\0';
  piVar9 = DAT_0029ede0;
  piVar2[0x11f] = 0;
  *(bool *)((int)piVar2 + 0x481) = *(char *)(*piVar9 + 0x25) != '\x03';
  *(undefined2 *)(iVar6 + (int)piVar2) = 0x14;
LAB_0029ed5c:
  if ((*DAT_0029ede8 != 0) && ((*(ushort *)((int)piVar2 + 0x2e) & 0xff) == 5)) {
    func_004ED620(*DAT_0029ede8,piVar2[0xb3]);
  }
  piVar2[0xeb] = (int)ALBW_AS_U32(fVar13);
  func_004D80A4((float *)(piVar2 + 0x118),piVar2[0xfa],DAT_0029edec);
  piVar2[0x119] = (int)ALBW_AS_U32(fVar12);
  return piVar2;
}

