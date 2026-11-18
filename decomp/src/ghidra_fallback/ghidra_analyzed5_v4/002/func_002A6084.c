#include "ghidra_types.h"

extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_001512B4(int param_1,float *param_2);
extern int func_0015133C(int param_1,undefined4 *param_2);
extern int func_00151358(int *param_1);
extern int func_001D3EA4(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4, undefined2 param_5,undefined2 param_6);
extern int func_002A3D8C(int param_1);
extern int func_002A4DF4(int param_1);
extern int func_002A6890(int param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_00491A18(float *param_1,uint *param_2,float *param_3);
extern int func_004CEAF0(int param_1);
extern int func_004D7F70(float *param_1,uint param_2);
extern void func_004F48F0(int param_1);
extern void func_004F5588(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F70A8(int *param_1);
extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern int func_004F8998(int *param_1,int param_2,char *param_3);
extern int func_004FAFDC(int param_1,float fparam_0);
extern int func_004FB0D8(int param_1,float *param_2);
extern int func_00564A78(int param_1,int *param_2);
extern int func_0058A4A8(int param_1);
extern int func_00662128(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern float DAT_002a642c;
extern float DAT_002a6430;
extern int DAT_002a6434;
extern float DAT_002a6438;
extern float *DAT_002a643c;
extern float DAT_002a6440;
extern float DAT_002a6444;
extern int DAT_002a6448;
extern float DAT_002a644c;
extern int *DAT_002a6450;
extern int *DAT_002a6454;
extern int *DAT_002a6458;
extern int *DAT_002a645c;
extern float *DAT_002a6460;
extern float DAT_002a6464;
extern float DAT_002a6468;
extern float DAT_002a6720;
extern float *DAT_002a6724;
extern undefined DAT_002a6728;
extern float DAT_002a6730;
extern int DAT_002a673c;
extern undefined4 DAT_002a6740;
extern char s_mouth_002a6734[];

// USA 002A6084 <- EU 002A6060 (Ghidra, non-matching)
// GLOBAL DAT_002a642c float
// GLOBAL DAT_002a6430 float
// GLOBAL DAT_002a6434 int
// GLOBAL DAT_002a6438 float
// GLOBAL DAT_002a643c float *
// GLOBAL DAT_002a6440 float
// GLOBAL DAT_002a6444 float
// GLOBAL DAT_002a6448 int
// GLOBAL DAT_002a644c float
// GLOBAL DAT_002a6450 int *
// GLOBAL DAT_002a6454 int *
// GLOBAL DAT_002a6458 int *
// GLOBAL DAT_002a645c int *
// GLOBAL DAT_002a6460 float *
// GLOBAL DAT_002a6464 float
// GLOBAL DAT_002a6468 float
// GLOBAL DAT_002a6720 float
// GLOBAL DAT_002a6724 float *
// GLOBAL DAT_002a6728 undefined
// GLOBAL DAT_002a6730 float
// GLOBAL DAT_002a673c int
// GLOBAL DAT_002a6740 undefined4
// GLOBAL s_mouth_002a6734 string

undefined4 func_002A6084(int *param_1)

{
  _Alignas(8) unsigned char albw_frame[0xc0]; /* entry_sp - 0xc0 .. entry_sp + 0x0 */
#define stack0xffffff40 (*(undefined4 *)(albw_frame + 0x0))
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  float *pfVar5;
  undefined4 *puVar6;
  undefined1 uVar7;
  float fVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  float fVar12;
  int iVar13;
  float *pfVar14;
  uint in_fpscr;
  uint uVar15;
  float fVar16;
  float fVar17;
  #define in_stack_ffffff40 (*(float *)(albw_frame + 0x0)) /* V4: frame slot (callee-filled) */
  #define in_stack_ffffff44 (*(int *)(albw_frame + 0x4)) /* V4: frame slot (callee-filled) */
  #define local_b8 (*(float *)(albw_frame + 0x8))
  #define local_b4 (*(char * *)(albw_frame + 0xc))
  #define local_b0 (*(undefined4 *)(albw_frame + 0x10))
  #define local_ac (*(undefined4 *)(albw_frame + 0x14))
  #define local_a8 (*(undefined4 *)(albw_frame + 0x18))
  #define local_a0 (*(float *)(albw_frame + 0x20))
  #define local_9c (*(undefined * *)(albw_frame + 0x24))
  #define fStack_98 (*(float *)(albw_frame + 0x28))
  #define local_94 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_84 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_78 (*(undefined ** *)(albw_frame + 0x48))
  #define local_74 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_6c (*(int *)(albw_frame + 0x54))
  #define auStack_68 ((undefined4 *)(albw_frame + 0x58))
  #define local_5c (*(int *)(albw_frame + 0x64))
  #define local_4c (*(int *)(albw_frame + 0x74))
  #define local_3c (*(int *)(albw_frame + 0x84))
  func_004FAFDC((int)param_1,DAT_002a642c);
  iVar3 = (int)*(short *)(DAT_002a6434 + (int)param_1);
  fVar17 = (float)VectorSignedToFloat(param_1[0x2d2],(byte)(in_fpscr >> 0x15) & 3);
  fVar16 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
  uVar10 = in_fpscr & 0xfffffff | (uint)(fVar17 * DAT_002a6430 < fVar16) << 0x1f;
  uVar15 = uVar10 | (uint)(NAN(fVar17 * DAT_002a6430) || NAN(fVar16)) << 0x1c;
  if ((byte)(uVar10 >> 0x1f) == ((byte)(uVar15 >> 0x1c) & 1)) {
    uVar7 = 2;
  }
  else {
    fVar16 = (float)VectorSignedToFloat(param_1[0x2d2],(byte)(uVar15 >> 0x15) & 3);
    fVar17 = (float)VectorSignedToFloat(iVar3,(byte)(uVar15 >> 0x15) & 3);
    uVar10 = in_fpscr & 0xfffffff | (uint)(fVar16 * DAT_002a6438 < fVar17) << 0x1f;
    uVar15 = uVar10 | (uint)(NAN(fVar16 * DAT_002a6438) || NAN(fVar17)) << 0x1c;
    if ((byte)(uVar10 >> 0x1f) != ((byte)(uVar15 >> 0x1c) & 1)) goto LAB_002a60f0;
    uVar7 = 1;
  }
  if (iVar3 < 1) {
    uVar7 = 0;
  }
  *(undefined1 *)((int)param_1 + 0x859) = uVar7;
LAB_002a60f0:
  *(undefined1 *)(param_1[0x2bf] + 0x61) = 0;
  if ((short)param_1[0x2d4] != 0) {
    *(short *)(param_1 + 0x2d4) = (short)param_1[0x2d4] + -1;
  }
  if (*(short *)((int)param_1 + 0xb52) != 0) {
    *(short *)((int)param_1 + 0xb52) = *(short *)((int)param_1 + 0xb52) + -1;
  }
  iVar3 = func_004F70A8(param_1);
  if (iVar3 != 0) {
    cVar1 = (char)param_1[0x279];
    if (((((cVar1 != '\x10' && cVar1 != '\x12') && (cVar1 != '\x04' && cVar1 != '\x0e')) &&
         (cVar1 != '\x0f' && cVar1 != '\x05')) &&
        ((2 < *(byte *)((int)param_1 + 0xb92) ||
         ((cVar1 != '\x06' && ((uint)param_1[0x2d5] < (uint)param_1[0x2d6])))))) &&
       (iVar3 = func_004F8998(param_1,0,(char *)0x0), iVar3 != 0)) {
      func_00662128(param_1 + 0x278,0x10);
    }
    piVar4 = (int *)(param_1[0x27f] + (char)param_1[0x279] * 8);
    uVar10 = *(uint *)(param_1[0x27f] + (char)param_1[0x279] * 8 + 4);
    piVar11 = (int *)(param_1[0x27d] + ((int)uVar10 >> 1));
    if ((uVar10 & 1) != 0) {
      piVar4 = (int *)(*piVar4 + *piVar11);
    }
    (*(code *)*piVar4)(piVar11);
    iVar3 = param_1[0x278] + 1;
    param_1[0x278] = iVar3;
    if (param_1[0x27c] != 0) {
      fVar16 = (float)VectorUnsignedToFloat(iVar3,(byte)(uVar15 >> 0x15) & 3);
      func_00352210(param_1[0x27c],1,fVar16);
    }
    fVar17 = DAT_002a6444;
    fVar16 = DAT_002a6440;
    pfVar14 = (float *)(param_1 + 0x2c3);
    fVar8 = DAT_002a643c[1];
    fVar12 = DAT_002a643c[2];
    *pfVar14 = *DAT_002a643c;
    param_1[0x2c4] = (int)ALBW_AS_U32(fVar8);
    param_1[0x2c5] = (int)ALBW_AS_U32(fVar12);
    piVar4 = DAT_002a6450;
    fVar8 = DAT_002a644c;
    iVar3 = DAT_002a6448;
    fVar12 = ALBW_AS_F32(param_1[0x2ce]);
    uVar10 = uVar15 & 0xfffffff | (uint)(fVar12 == fVar16) << 0x1e;
    if (!SUB41(uVar10 >> 0x1e,0)) {
      param_1[0x2ce] = (int)ALBW_AS_U32((fVar12 + -fVar12 * fVar17));
      piVar11 = DAT_002a6454;
      iVar13 = param_1[0x2e2];
      iVar9 = *piVar4;
      param_1[0x2e2] = iVar9 + iVar13;
      uVar15 = (iVar9 + iVar13) * *piVar11;
      pfVar5 = (float *)(iVar3 + (uVar15 >> 0x18) * 0x10);
      fVar12 = (float)VectorUnsignedToFloat(uVar15 & 0xffffff,(byte)(uVar10 >> 0x15) & 3);
      param_1[0x2c3] = (int)ALBW_AS_U32(((*pfVar5 + pfVar5[1] * fVar12 * fVar8) * ALBW_AS_F32(param_1[0x2ce])));
      func_004D7F70(pfVar14,param_1[0xfa]);
    }
    if (*(char *)((int)param_1 + 0xb96) == '\0') {
      fVar12 = ALBW_AS_F32(param_1[0x2cf]);
      param_1[0x283] = (int)ALBW_AS_U32(fVar16);
      piVar4 = DAT_002a6458;
      uVar10 = uVar10 & 0xfffffff | (uint)(fVar12 == fVar16) << 0x1e;
      if (!SUB41(uVar10 >> 0x1e,0)) {
        param_1[0x2cf] = (int)ALBW_AS_U32((fVar12 + -fVar12 * fVar17));
        piVar11 = DAT_002a645c;
        iVar13 = param_1[0x2e3];
        iVar9 = *piVar4;
        param_1[0x2e3] = iVar9 + iVar13;
        uVar15 = (iVar9 + iVar13) * *piVar11;
        pfVar5 = (float *)(iVar3 + (uVar15 >> 0x18) * 0x10);
        fVar16 = (float)VectorUnsignedToFloat(uVar15 & 0xffffff,(byte)(uVar10 >> 0x15) & 3);
        param_1[0x283] = (int)ALBW_AS_U32(((*pfVar5 + pfVar5[1] * fVar16 * fVar8) * ALBW_AS_F32(param_1[0x2cf])));
      }
    }
    if ((char)param_1[0x279] != '\0') {
      fVar16 = func_004F898C();
      func_004F8964((float *)(param_1 + 0xf8),1,fVar16);
      func_004FB0D8((int)param_1,(float *)(param_1 + 0xf8));
    }
    pfVar5 = DAT_002a6460;
    *(int *)(param_1[0x103] + 0x158) = param_1[0x2ca];
    fVar16 = ALBW_AS_F32(param_1[0x2cd]);
    if (param_1[0x2ca] < (int)pfVar5) {
      fVar17 = -fVar16;
    }
    else {
      fVar17 = DAT_002a6468 - fVar16;
    }
    piVar4 = param_1 + 0x103;
    param_1[0x2cd] = (int)ALBW_AS_U32((fVar16 + fVar17 * DAT_002a6464));
    param_1[0x13e] = param_1[0x2cd];
    *(undefined1 *)(param_1 + 0x2e4) = 0;
    func_004F48F0((int)param_1);
    func_004F5588((int)param_1);
    cVar1 = (char)param_1[0x279];
    if ((cVar1 != '\0' && cVar1 != '\x10') && cVar1 != '\x12') {
      in_stack_ffffff40 = 0.0;
      in_stack_ffffff44 = 0;
      pfVar5 = (float *)param_1[0x161];
      func_0014E2A0((int)param_1,param_1[0x289],param_1[0x28f],(uint)pfVar5,0,0);
    }
    if (((*(char *)((int)param_1 + 0xb96) == '\0') && ((char)param_1[0x279] != '\x10')) &&
       ((char)param_1[0x279] != '\0')) {
      in_stack_ffffff40 = 0.0;
      in_stack_ffffff44 = 0;
      pfVar5 = (float *)param_1[0x161];
      func_0014E2A0((int)param_1,param_1[0x28a],param_1[0x290],(uint)pfVar5,0,0);
    }
    func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,pfVar5);
    iVar3 = func_0058A4A8((int)param_1);
    if (iVar3 != 0) {
      func_00115C70((float *)&stack0xffffff40,(float *)(param_1 + 0x295),(float *)(param_1 + 0x298))
      ;
      local_78 = &local_9c;
      uVar10 = func_0068C690((float *)&stack0xffffff40);
      func_00491624((float *)local_78,0,uVar10,0);
      func_00115D70((float *)&stack0xffffff40,(float *)&stack0xffffff40,DAT_002a6720);
      func_00115C54((float *)&stack0xffffff40,(float *)&stack0xffffff40,(float *)(param_1 + 0x298));
      param_1[0x2b9] = (int)ALBW_AS_U32(in_stack_ffffff40);
      param_1[0x2ba] = in_stack_ffffff44;
      param_1[699] = (int)ALBW_AS_U32(local_b8);
      func_001512B4(param_1[0x288],(float *)(param_1 + 0x2b9));
      pfVar5 = DAT_002a6724;
      if ((char)param_1[0x279] == '\0') {
        fVar16 = *DAT_002a6724;
        fVar17 = DAT_002a6724[1];
        local_b8 = DAT_002a6724[2];
        func_00115D70((float *)&stack0xffffff40,(float *)&stack0xffffff40,ALBW_AS_F32(param_1[0x2ca]));
        piVar11 = (int *)param_1[0x288];
        piVar11[4] = (int)ALBW_AS_U32(fVar16);
        piVar11[5] = (int)ALBW_AS_U32(fVar17);
        piVar11[6] = (int)ALBW_AS_U32(local_b8);
      }
      else {
        piVar11 = (int *)param_1[0x288];
        piVar11[4] = (int)ALBW_AS_U32(*DAT_002a6724);
        piVar11[5] = (int)ALBW_AS_U32(pfVar5[1]);
        piVar11[6] = (int)ALBW_AS_U32(pfVar5[2]);
      }
      func_00151358(piVar11);
      func_0015133C(param_1[0x288],&local_9c);
    }
    local_b4 = (char *)param_1[0x2e1];
    local_b8 = 0.0;
    local_b0 = 0;
    func_00491A18(&fStack_98,(uint *)&local_b8,pfVar14);
    iVar3 = param_1[0x103];
    *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
    func_001157FC((float *)(iVar3 + 0x80),(float *)(*piVar4 + 0x80),&fStack_98);
    func_004CEAF0(*piVar4);
    fVar16 = DAT_002a6730;
    iVar3 = *piVar4;
    local_9c = &DAT_002a6728;
    local_a0 = DAT_002a6730;
    uVar10 = func_00564A78(*piVar4,(int *)&local_a0);
    func_001119F4(auStack_68,(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x24) + 0x14) + uVar10 * 0x30)
                 );
    param_1[0x2c0] = local_5c;
    param_1[0x2c1] = local_4c;
    param_1[0x2c2] = local_3c;
    func_002A3D8C((int)param_1);
    func_002A4DF4((int)param_1);
    if (*(char *)((int)param_1 + 0xb9a) != '\0') {
      iVar3 = param_1[0x103];
      local_b4 = s_mouth_002a6734;
      local_b8 = fVar16;
      uVar10 = func_00564A78(*piVar4,(int *)&local_b8);
      func_001119F4(&local_a0,
                    (undefined4 *)(*(int *)(*(int *)(iVar3 + 0x24) + 0x14) + uVar10 * 0x30));
      local_b0 = local_94;
      local_ac = local_84;
      local_a8 = local_74;
      local_6c = param_1[0xb3];
      func_001D3EA4(&local_b0,param_1[0xfa],&local_6c,*(undefined4 *)(DAT_002a673c + 0x7c),2,1);
      *(undefined1 *)((int)param_1 + 0xb9a) = 0;
    }
    uVar2 = DAT_002a6740;
    puVar6 = (undefined4 *)param_1[0x277];
    *puVar6 = 0;
    puVar6[1] = uVar2;
    return func_002A6890((int)param_1);
  }
  return 0;
}

