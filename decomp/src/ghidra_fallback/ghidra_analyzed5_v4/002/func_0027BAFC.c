#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_002767E8(int param_1,undefined4 *param_2);
extern int func_00276950(int param_1,int param_2,undefined4 *param_3);
extern int func_00276EAC(int param_1,undefined4 param_2);
extern int func_0027ACA4(int param_1,int *param_2);
extern int func_0027B58C(int param_1,int *param_2);
extern int func_0027B680(int param_1,int *param_2);
extern int func_0027BA50(uint *param_1,undefined4 *param_2,undefined4 *param_3,int *param_4);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_00560E74(int *param_1,uint *param_2,uint *param_3);
extern int func_00561114(int *param_1,int *param_2,uint *param_3);
extern int func_006890C8(undefined4 *param_1,int *param_2,int *param_3);
extern undefined DAT_0027be8c;
extern int *DAT_0027be90;
extern float DAT_0027be94;
extern undefined DAT_0027be98;
extern undefined4 DAT_0027be9c;
extern undefined DAT_0027bea0;
extern int DAT_0027bea4;
extern undefined4 DAT_0027bea8;

// USA 0027BAFC <- EU 0027BB24 (Ghidra, non-matching)
// GLOBAL DAT_0027be8c undefined
// GLOBAL DAT_0027be90 int *
// GLOBAL DAT_0027be94 float
// GLOBAL DAT_0027be98 undefined
// GLOBAL DAT_0027be9c undefined4
// GLOBAL DAT_0027bea0 undefined
// GLOBAL DAT_0027bea4 int
// GLOBAL DAT_0027bea8 undefined4

undefined4 func_0027BAFC(int param_1,int *param_2,float *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  uint uVar9;
  undefined2 uVar10;
  float fVar11;
  undefined8 uVar12;
  _Alignas(8) unsigned char albw_frame[0x350];
  #define local_348 (*(float *)(albw_frame + 0x8))
  #define local_344 (*(uint *)(albw_frame + 0xc))
  #define local_340 (*(uint *)(albw_frame + 0x10))
  #define local_33c (*(undefined4 *)(albw_frame + 0x14))
  #define local_338 (*(undefined4 *)(albw_frame + 0x18))
  #define local_334 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_330 (*(undefined4 *)(albw_frame + 0x20))
  #define local_32c (*(undefined2 *)(albw_frame + 0x24))
  #define local_32a (*(undefined2 *)(albw_frame + 0x26))
  #define local_328 (*(undefined2 *)(albw_frame + 0x28))
  #define local_326 (*(undefined2 *)(albw_frame + 0x2a))
  #define local_324 (*(undefined4 * *)(albw_frame + 0x2c))
  #define local_320 (*(float *)(albw_frame + 0x30))
  #define local_31c (*(float *)(albw_frame + 0x34))
  #define local_318 (*(float *)(albw_frame + 0x38))
  #define uStack_314 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_310 (*(float *)(albw_frame + 0x40))
  #define local_30c (*(uint *)(albw_frame + 0x44))
  #define local_308 (*(uint *)(albw_frame + 0x48))
  #define local_304 (*(uint *)(albw_frame + 0x4c))
  #define local_300 (*(uint *)(albw_frame + 0x50))
  #define local_2fc (*(uint *)(albw_frame + 0x54))
  #define local_2f8 (*(undefined4 *)(albw_frame + 0x58))
  #define local_2f4 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_2f0 (*(undefined4 *)(albw_frame + 0x60))
  #define local_2ec (*(short *)(albw_frame + 0x64))
  #define local_2ea (*(undefined2 *)(albw_frame + 0x66))
  #define local_2e8 (*(undefined2 *)(albw_frame + 0x68))
  #define local_2e6 (*(undefined2 *)(albw_frame + 0x6a))
  #define local_2e4 (*(undefined1 *)(albw_frame + 0x6c))
  #define local_2e3 (*(undefined1 *)(albw_frame + 0x6d))
  #define local_2e2 (*(undefined2 *)(albw_frame + 0x6e))
  #define local_2e0 (*(undefined2 *)(albw_frame + 0x70))
  #define local_2cc (*(undefined4 *)(albw_frame + 0x84))
  #define local_2c8 (*(undefined4 *)(albw_frame + 0x88))
  #define local_2c0 (*(undefined2 *)(albw_frame + 0x90))
  #define local_2bc (*(char *)(albw_frame + 0x94))
  #define local_2ba (*(undefined2 *)(albw_frame + 0x96))
  #define local_54 (*(undefined4 *)(albw_frame + 0x2fc))
  #define local_50 (*(float *)(albw_frame + 0x300))
  #define local_4c (*(uint *)(albw_frame + 0x304))
  #define local_48 (*(uint *)(albw_frame + 0x308))
  #define local_44 (*(int *)(albw_frame + 0x30c))
  #define local_40 (*(uint *)(albw_frame + 0x310))
  #define local_3c (*(uint *)(albw_frame + 0x314))
  #define local_38 (*(uint *)(albw_frame + 0x318))
  #define local_34 (*(uint *)(albw_frame + 0x31c))
  #define local_30 ((uint *)(albw_frame + 0x320))
  #define local_28 (*(int *)(albw_frame + 0x328))
  #define local_24 (*(int *)(albw_frame + 0x32c))
  local_40 = 0;
  iVar3 = func_00560E74(param_2,&local_40,(uint *)&DAT_0027be8c);
  piVar1 = DAT_0027be90;
  if (iVar3 != 0) {
    puVar8 = (uint *)(*(int *)(*DAT_0027be90 + 0x38) + 0x15b48);
    uVar9 = *puVar8;
    uVar4 = local_40;
    if ((int)local_40 < (int)uVar9) {
      uVar4 = uVar9;
    }
    *puVar8 = uVar4;
    cVar2 = func_0027BA50(&local_3c,&local_320,&local_50,param_2);
    if (cVar2 != '\0') {
      func_00115C54(&local_50,&local_50,param_3);
      iVar3 = *(int *)(*piVar1 + 0x38);
      if (param_1 == 7) {
        local_2f4 = 0;
        local_2f0 = 0;
        local_2f8 = 0;
        local_2cc = 0;
        local_2c8 = 0;
        local_54 = 0;
        fVar11 = DAT_0027be94;
        func_002DFF7C(&uStack_314);
        iVar5 = func_0027ACA4((int)&uStack_314,param_2);
        if (iVar5 != 0) {
          func_0027B58C((int)&uStack_314,param_2);
          uVar10 = 0xffff;
          if (local_2bc != '\0') {
            uVar10 = local_2ba;
          }
          local_30[0] = 0;
          iVar5 = func_00560E74(param_2,local_30,(uint *)&DAT_0027be98);
          if (iVar5 != 0) {
            local_33c = DAT_0027be9c;
            local_338 = DAT_0027be9c;
            local_334 = DAT_0027be9c;
            local_330 = 0;
            local_32c = 0;
            local_348 = local_50;
            local_32a = 0xffff;
            local_328 = 0xffff;
            local_344 = local_4c;
            local_326 = 0xffff;
            local_324 = (undefined4 *)0x0;
            local_340 = local_48;
            uVar12 = func_00114608((uint)ALBW_AS_U32((local_31c * fVar11)),0xffffffff);
            local_330 = (undefined4)uVar12;
            local_32c = local_2ea;
            local_32a = (undefined2)local_30[0];
            local_328 = (undefined2)local_40;
            local_44 = 0;
            local_326 = uVar10;
            iVar5 = func_00561114(param_2,&local_44,(uint *)&DAT_0027bea0);
            puVar7 = local_324;
            if (iVar5 != 0) {
              puVar6 = (undefined4 *)func_0010BAB4(0xc);
              puVar7 = (undefined4 *)0x0;
              if (puVar6 != (undefined4 *)0x0) {
                local_28 = DAT_0027bea4;
                local_24 = local_44;
                puVar7 = func_006890C8(puVar6,(int *)0x0,&local_28);
              }
            }
            local_324 = puVar7;
            func_00276950(iVar3,(int)local_2ec,&local_348);
            if (-1 < (short)local_30[0]) {
              iVar5 = iVar3 + 0x183c + (int)(short)local_30[0] * (int)(short)DAT_0027bea8 * 4;
              iVar3 = *(int *)(iVar5 + 0x3bc);
              *(int *)(iVar5 + 0x3bc) = iVar3 + 1;
              *(short *)(iVar5 + 0x33c + iVar3 * 2) = local_2ec;
              return 0;
            }
          }
        }
      }
      else {
        local_2f4 = 0;
        local_2f0 = 0;
        local_2f8 = 0;
        local_2cc = 0;
        local_2c8 = 0;
        local_54 = 0;
        if (param_1 == 0x1b) {
          func_002DFF7C(&uStack_314);
          local_310 = local_50;
          local_30c = local_4c;
          local_308 = local_48;
          local_304 = local_3c;
          local_300 = local_38;
          local_2fc = local_34;
          local_2c0 = (undefined2)local_40;
          iVar5 = func_0027ACA4((int)&uStack_314,param_2);
          if ((iVar5 != 0) && (iVar5 = func_0027B680((int)&uStack_314,param_2), iVar5 != 0)) {
            func_0027B58C((int)&uStack_314,param_2);
            return func_002767E8(iVar3,&uStack_314);
          }
        }
        else {
          fVar11 = DAT_0027be94;
          func_002DFF7C(&uStack_314);
          iVar5 = func_0027ACA4((int)&uStack_314,param_2);
          if (iVar5 != 0) {
            puVar8 = (uint *)func_0010BAB4(0x38);
            if (puVar8 != (uint *)0x0) {
              *puVar8 = local_40;
              puVar8[1] = (uint)ALBW_AS_U32(local_50);
              puVar8[2] = local_4c;
              puVar8[3] = local_48;
              puVar8[4] = local_3c;
              puVar8[5] = local_38;
              puVar8[6] = local_34;
              uVar12 = func_00114608((uint)ALBW_AS_U32((local_320 * fVar11)),local_38);
              puVar8[7] = (uint)uVar12;
              uVar12 = func_00114608((uint)ALBW_AS_U32((local_31c * fVar11)),(uint)((ulonglong)uVar12 >> 0x20));
              puVar8[8] = (uint)uVar12;
              uVar12 = func_00114608((uint)ALBW_AS_U32((local_318 * fVar11)),(uint)((ulonglong)uVar12 >> 0x20));
              puVar8[9] = (uint)uVar12;
            }
            *(short *)(puVar8 + 10) = local_2ec;
            *(undefined2 *)((int)puVar8 + 0x2a) = local_2ea;
            *(undefined2 *)(puVar8 + 0xb) = local_2e8;
            *(undefined2 *)((int)puVar8 + 0x2e) = local_2e6;
            *(undefined2 *)((int)puVar8 + 0x32) = local_2e2;
            *(undefined1 *)(puVar8 + 0xc) = local_2e4;
            *(undefined2 *)(puVar8 + 0xd) = local_2e0;
            *(undefined1 *)((int)puVar8 + 0x31) = local_2e3;
            func_00276EAC(iVar3,puVar8);
          }
        }
      }
    }
  }
  return 0;
}

