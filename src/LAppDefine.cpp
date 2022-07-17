/**
 * Copyright(c) Live2D Inc. All rights reserved.
 *
 * Use of this source code is governed by the Live2D Open Software license
 * that can be found at https://www.live2d.com/eula/live2d-open-software-license-agreement_en.html.
 */

#include "LAppDefine.hpp"
#include <CubismFramework.hpp>
#include <vector>
#include <string>

namespace LAppDefine {
    using namespace std;
    using namespace Csm;

    // 画面
    const csmFloat32 ViewMaxScale = 4.0f;
    const csmFloat32 ViewMinScale = 0.4f;

    const csmFloat32 ViewLogicalLeft = -1.0f;
    const csmFloat32 ViewLogicalRight = 1.0f;

    const csmFloat32 ViewLogicalMaxLeft = -2.0f;
    const csmFloat32 ViewLogicalMaxRight = 2.0f;
    const csmFloat32 ViewLogicalMaxBottom = -2.0f;
    const csmFloat32 ViewLogicalMaxTop = 2.0f;

    // 相対パス
    string ResourcesPath = "Resources/";

    // モデルの後ろにある背景の画像ファイル
    string BackImageName = "back_class_normal.png";
    // 歯車
    string GearImageName = "icon_gear.png";
    // 終了ボタン
    string PowerImageName = "close.png";

    // モデル定義------------------------------------------
    // モデルを配置したディレクトリ名の配列
    // ディレクトリ名とmodel3.jsonの名前を一致させておくこと
    vector<string> ModelDir = {
        "edu"
    };
    csmInt32 ModelDirSize = ModelDir.size();

    // 外部定義ファイル(json)と合わせる
    const csmChar* MotionGroupIdle = "Idle"; // アイドリング
    const csmChar* MotionGroupTapHead = "TouchHead";
    const csmChar* MotionGroupTapBody = "TouchBody"; // 体をタップしたとき
    const csmChar* MotionGroupTapSpecial = "TouchSpecial"; // 体をタップしたとき

    // 外部定義ファイル(json)と合わせる
    const csmChar* HitAreaNameHead = "Head";
    const csmChar* HitAreaNameBody = "Body";
    const csmChar* HitAreaNameSpecial = "Special";

    // モーションの優先度定数
    const csmInt32 PriorityNone = 0;
    const csmInt32 PriorityIdle = 1;
    const csmInt32 PriorityNormal = 2;
    const csmInt32 PriorityForce = 3;

    // デバッグ用ログの表示オプション
    const csmBool DebugLogEnable = true;
    const csmBool DebugTouchLogEnable = false;

    // Frameworkから出力するログのレベル設定
    const CubismFramework::Option::LogLevel CubismLoggingLevel = CubismFramework::Option::LogLevel_Verbose;

    // デフォルトのレンダーターゲットサイズ
    csmInt32 RenderTargetWidth = 1920;
    csmInt32 RenderTargetHeight = 1080;

    //窗口偏移
    csmInt32 RenderWindowBiasX = 0;
    csmInt32 RenderWindowBiasY = 0;

    //Live2dModel显示偏移值
    csmInt32 RenderTargetBiasX = 0;
    csmInt32 RenderTargetBiasY = 20;

    //Live2d背景显示偏移值
    csmInt32 RenderBackgroundBiasX = 0;
    csmInt32 RenderBackgroundBiasY = 20;

    csmFloat32 Rate = 800;

    csmFloat32 RenderTargetSize = 1;

    csmBool MouseMove = false;

    //背景是否存在
    csmBool HasBackground = true;
}
