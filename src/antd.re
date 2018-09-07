let optBoolToOptJsBoolean =
  fun
  | None => None
  | Some((v)) => Some(v);

let unwrapBool = (v) => Js.Undefined.from_opt @@ optBoolToOptJsBoolean(v);

module Popconfirm = {
  [@bs.module] external popconfirm : ReasonReact.reactClass = "antd/lib/popconfirm";
  let make =
      (
        ~onCancel=?,
        ~className=?,
        ~title=?,
        ~cancelText=?,
        ~style=?,
        ~id=?,
        ~onConfirm=?,
        ~okText=?,
        ~okType=?
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=popconfirm,
      ~props=
        Js.Undefined.(
          {
            "onCancel": from_opt(onCancel),
            "className": from_opt(className),
            "title": from_opt(title),
            "cancelText": from_opt(cancelText),
            "style": from_opt(style),
            "id": from_opt(id),
            "onConfirm": from_opt(onConfirm),
            "okText": from_opt(okText),
            "okType": from_opt(okType)
          }
        )
    );
};

module LocaleProvider = {
  [@bs.module] external localeProvider : ReasonReact.reactClass = "antd/lib/locale-provider";
  let make = (~id=?, ~className=?, ~style=?, ~locale=?) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=localeProvider,
      ~props=
        Js.Undefined.(
          {
            "id": from_opt(id),
            "className": from_opt(className),
            "style": from_opt(style),
            "locale": from_opt(locale)
          }
        )
    );
};

module Tree = {
  [@bs.module] external tree : ReasonReact.reactClass = "antd/lib/tree";
  let make =
      (
        ~defaultCheckedKeys=?,
        ~multiple=?,
        ~defaultExpandAll=?,
        ~selectedKeys=?,
        ~filterTreeNode=?,
        ~defaultExpandedKeys=?,
        ~onCheck=?,
        ~expandedKeys=?,
        ~onSelect=?,
        ~loadData=?,
        ~showLine=?,
        ~onDragEnter=?,
        ~autoExpandParent=?,
        ~onRightClick=?,
        ~checkedKeys=?,
        ~showIcon=?,
        ~className=?,
        ~style=?,
        ~checkable=?,
        ~onDragOver=?,
        ~onDragLeave=?,
        ~onExpand=?,
        ~id=?,
        ~checkStrictly=?,
        ~onDragEnd=?,
        ~draggable=?,
        ~onDragStart=?,
        ~onDrop=?,
        ~defaultSelectedKeys=?
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=tree,
      ~props=
        Js.Undefined.(
          {
            "defaultCheckedKeys": from_opt(defaultCheckedKeys),
            "multiple": unwrapBool(multiple),
            "defaultExpandAll": unwrapBool(defaultExpandAll),
            "selectedKeys": from_opt(selectedKeys),
            "filterTreeNode": from_opt(filterTreeNode),
            "defaultExpandedKeys": from_opt(defaultExpandedKeys),
            "onCheck": from_opt(onCheck),
            "expandedKeys": from_opt(expandedKeys),
            "onSelect": from_opt(onSelect),
            "loadData": from_opt(loadData),
            "showLine": unwrapBool(showLine),
            "onDragEnter": from_opt(onDragEnter),
            "autoExpandParent": unwrapBool(autoExpandParent),
            "onRightClick": from_opt(onRightClick),
            "checkedKeys": from_opt(checkedKeys),
            "showIcon": unwrapBool(showIcon),
            "className": from_opt(className),
            "style": from_opt(style),
            "checkable": unwrapBool(checkable),
            "onDragOver": from_opt(onDragOver),
            "onDragLeave": from_opt(onDragLeave),
            "onExpand": from_opt(onExpand),
            "id": from_opt(id),
            "checkStrictly": from_opt(checkStrictly),
            "onDragEnd": from_opt(onDragEnd),
            "draggable": unwrapBool(draggable),
            "onDragStart": from_opt(onDragStart),
            "onDrop": from_opt(onDrop),
            "defaultSelectedKeys": from_opt(defaultSelectedKeys)
          }
        )
    );
  module TreeNode = {
    [@bs.module "antd/lib/tree"] external treeNode : ReasonReact.reactClass = "TreeNode";
    let make =
        (
          ~disabled=?,
          ~disableCheckbox=?,
          ~title=?,
          ~key=?,
          ~isLeaf=?,
          ~id=?,
          ~className=?,
          ~style=?
        ) =>
      ReasonReact.wrapJsForReason(
        ~reactClass=treeNode,
        ~props=
          Js.Undefined.(
            {
              "disabled": unwrapBool(disabled),
              "disableCheckbox": unwrapBool(disableCheckbox),
              "title": from_opt(title),
              "key": from_opt(key),
              "isLeaf": unwrapBool(isLeaf),
              "id": from_opt(id),
              "className": from_opt(className),
              "style": from_opt(style)
            }
          )
      );
  };
};

module Table = {
  [@bs.module] external table : ReasonReact.reactClass = "antd/lib/table";
  let make =
      (
        ~onRowMouseLeave=?,
        ~defaultExpandedRowKeys=?,
        ~onRowDoubleClick=?,
        ~onExpandedRowsChange=?,
        ~rowKey=?,
        ~locale=?,
        ~showHeader=?,
        ~columns=?,
        ~defaultExpandAllRows=?,
        ~bordered=?,
        ~indentSize=?,
        ~footer=?,
        ~expandedRowRender=?,
        ~className=?,
        ~size=?,
        ~title=?,
        ~style=?,
        ~rowClassName=?,
        ~expandedRowKeys=?,
        ~scroll=?,
        ~onExpand=?,
        ~dataSource=?,
        ~pagination=?,
        ~id=?,
        ~onRowMouseEnter=?,
        ~rowSelection=?,
        ~onRowClick=?,
        ~onChange=?,
        ~loading=?
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=table,
      ~props=
        Js.Undefined.(
          {
            "onRowMouseLeave": from_opt(onRowMouseLeave),
            "defaultExpandedRowKeys": from_opt(defaultExpandedRowKeys),
            "onRowDoubleClick": from_opt(onRowDoubleClick),
            "onExpandedRowsChange": from_opt(onExpandedRowsChange),
            "rowKey": from_opt(rowKey),
            "locale": from_opt(locale),
            "showHeader": unwrapBool(showHeader),
            "columns": from_opt(columns),
            "defaultExpandAllRows": unwrapBool(defaultExpandAllRows),
            "bordered": unwrapBool(bordered),
            "indentSize": from_opt(indentSize),
            "footer": from_opt(footer),
            "expandedRowRender": from_opt(expandedRowRender),
            "className": from_opt(className),
            "size": from_opt(size),
            "title": from_opt(title),
            "style": from_opt(style),
            "rowClassName": from_opt(rowClassName),
            "expandedRowKeys": from_opt(expandedRowKeys),
            "scroll": from_opt(scroll),
            "onExpand": from_opt(onExpand),
            "dataSource": from_opt(dataSource),
            "pagination": from_opt(pagination),
            "id": from_opt(id),
            "onRowMouseEnter": from_opt(onRowMouseEnter),
            "rowSelection": from_opt(rowSelection),
            "onRowClick": from_opt(onRowClick),
            "onChange": from_opt(onChange),
            "loading": unwrapBool(loading)
          }
        )
    );
  module Column = {
    [@bs.module "antd/lib/table"] external column : ReasonReact.reactClass = "Column";
    let make =
        (
          ~filterMultiple=?,
          ~filtered=?,
          ~filterDropdown=?,
          ~filterIcon=?,
          ~key=?,
          ~filters=?,
          ~width=?,
          ~filterDropdownVisible=?,
          ~className=?,
          ~title=?,
          ~style=?,
          ~render=?,
          ~colSpan=?,
          ~sorter=?,
          ~id=?,
          ~sortOrder=?,
          ~onFilter=?,
          ~filteredValue=?,
          ~onCellClick=?,
          ~fixed=?,
          ~dataIndex=?,
          ~onFilterDropdownVisibleChange=?
        ) =>
      ReasonReact.wrapJsForReason(
        ~reactClass=column,
        ~props=
          Js.Undefined.(
            {
              "filterMultiple": unwrapBool(filterMultiple),
              "filtered": unwrapBool(filtered),
              "filterDropdown": from_opt(filterDropdown),
              "filterIcon": from_opt(filterIcon),
              "key": from_opt(key),
              "filters": from_opt(filters),
              "width": from_opt(width),
              "filterDropdownVisible": unwrapBool(filterDropdownVisible),
              "className": from_opt(className),
              "title": from_opt(title),
              "style": from_opt(style),
              "render": from_opt(render),
              "colSpan": from_opt(colSpan),
              "sorter": from_opt(sorter),
              "id": from_opt(id),
              "sortOrder": from_opt(sortOrder),
              "onFilter": from_opt(onFilter),
              "filteredValue": from_opt(filteredValue),
              "onCellClick": from_opt(onCellClick),
              "fixed": from_opt(fixed),
              "dataIndex": from_opt(dataIndex),
              "onFilterDropdownVisibleChange": from_opt(onFilterDropdownVisibleChange)
            }
          )
      );
  };
  module ColumnGroup = {
    [@bs.module "antd/lib/table"] external columnGroup : ReasonReact.reactClass = "ColumnGroup";
    let make = (~id=?, ~className=?, ~style=?, ~title=?) =>
      ReasonReact.wrapJsForReason(
        ~reactClass=columnGroup,
        ~props=
          Js.Undefined.(
            {
              "id": from_opt(id),
              "className": from_opt(className),
              "style": from_opt(style),
              "title": from_opt(title)
            }
          )
      );
  };
};

module Affix = {
  [@bs.module] external affix : ReasonReact.reactClass = "antd/lib/affix";
  let make =
      (
        ~offsetTop=?,
        ~offset=?,
        ~offsetBottom=?,
        ~target=?,
        ~onChange=?,
        ~id=?,
        ~className=?,
        ~style=?
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=affix,
      ~props=
        Js.Undefined.(
          {
            "offsetTop": from_opt(offsetTop),
            "offset": from_opt(offset),
            "offsetBottom": from_opt(offsetBottom),
            "target": from_opt(target),
            "onChange": from_opt(onChange),
            "id": from_opt(id),
            "className": from_opt(className),
            "style": from_opt(style)
          }
        )
    );
};

module Tabs = {
  [@bs.module] external tabs : ReasonReact.reactClass = "antd/lib/tabs";
  let make =
      (
        ~onEdit=?,
        ~tabBarExtraContent=?,
        ~hideAdd=?,
        ~tabPosition=?,
        ~type_=?,
        ~activeKey=?,
        ~onNextClick=?,
        ~onPrevClick=?,
        ~className=?,
        ~size=?,
        ~style=?,
        ~id=?,
        ~tabBarStyle=?,
        ~defaultActiveKey=?,
        ~onChange=?,
        ~onTabClick=?,
        ~animated=?
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=tabs,
      ~props=
        Js.Undefined.(
          {
            "onEdit": from_opt(onEdit),
            "tabBarExtraContent": from_opt(tabBarExtraContent),
            "hideAdd": unwrapBool(hideAdd),
            "tabPosition": from_opt(tabPosition),
            "type": from_opt(type_),
            "activeKey": from_opt(activeKey),
            "onNextClick": from_opt(onNextClick),
            "onPrevClick": from_opt(onPrevClick),
            "className": from_opt(className),
            "size": from_opt(size),
            "style": from_opt(style),
            "id": from_opt(id),
            "tabBarStyle": from_opt(tabBarStyle),
            "defaultActiveKey": from_opt(defaultActiveKey),
            "onChange": from_opt(onChange),
            "onTabClick": from_opt(onTabClick),
            "animated": unwrapBool(animated)
          }
        )
    );
  module TabPane = {
    [@bs.module "antd/lib/tabs"] external tabPane : ReasonReact.reactClass = "TabPane";
    let make = (~key=?, ~tab=?, ~forceRender=?, ~id=?, ~className=?, ~style=?) =>
      ReasonReact.wrapJsForReason(
        ~reactClass=tabPane,
        ~props=
          Js.Undefined.(
            {
              "key": from_opt(key),
              "tab": from_opt(tab),
              "forceRender": unwrapBool(forceRender),
              "id": from_opt(id),
              "className": from_opt(className),
              "style": from_opt(style)
            }
          )
      );
  };
};

module Radio = {
  [@bs.module] external radio : ReasonReact.reactClass = "antd/lib/radio";
  let make = (~checked=?, ~defaultChecked=?, ~value=?, ~disabled=?, ~id=?, ~className=?, ~style=?) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=radio,
      ~props=
        Js.Undefined.(
          {
            "checked": unwrapBool(checked),
            "defaultChecked": unwrapBool(defaultChecked),
            "value": from_opt(value),
            "disabled": unwrapBool(disabled),
            "id": from_opt(id),
            "className": from_opt(className),
            "style": from_opt(style)
          }
        )
    );
  module Group = {
    [@bs.module "antd/lib/radio"] external group : ReasonReact.reactClass = "Group";
    let make =
        (
          ~disabled=?,
          ~name=?,
          ~value=?,
          ~className=?,
          ~size=?,
          ~style=?,
          ~id=?,
          ~options=?,
          ~defaultValue=?,
          ~onChange=?
        ) =>
      ReasonReact.wrapJsForReason(
        ~reactClass=group,
        ~props=
          Js.Undefined.(
            {
              "disabled": unwrapBool(disabled),
              "name": from_opt(name),
              "value": from_opt(value),
              "className": from_opt(className),
              "size": from_opt(size),
              "style": from_opt(style),
              "id": from_opt(id),
              "options": from_opt(options),
              "defaultValue": from_opt(defaultValue),
              "onChange": from_opt(onChange)
            }
          )
      );
  };
  module Button = {
    [@bs.module "antd/lib/radio"] external button : ReasonReact.reactClass = "Button";
    let make =
        (
          ~defaultChecked=?,
          ~disabled=?,
          ~name=?,
          ~value=?,
          ~onMouseEnter=?,
          ~className=?,
          ~style=?,
          ~checked=?,
          ~id=?,
          ~onMouseLeave=?,
          ~onChange=?
        ) =>
      ReasonReact.wrapJsForReason(
        ~reactClass=button,
        ~props=
          Js.Undefined.(
            {
              "defaultChecked": unwrapBool(defaultChecked),
              "disabled": unwrapBool(disabled),
              "name": from_opt(name),
              "value": from_opt(value),
              "onMouseEnter": from_opt(onMouseEnter),
              "className": from_opt(className),
              "style": from_opt(style),
              "checked": unwrapBool(checked),
              "id": from_opt(id),
              "onMouseLeave": from_opt(onMouseLeave),
              "onChange": from_opt(onChange)
            }
          )
      );
  };
};

module Button = {
  [@bs.module] external button : ReasonReact.reactClass = "antd/lib/button";
  let make =
      (
        ~type_=?,
        ~icon=?,
        ~className=?,
        ~size=?,
        ~style=?,
        ~htmlType=?,
        ~loading=?,
        ~id=?,
        ~shape=?,
        ~ghost=?,
        ~onClick=?
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=button,
      ~props=
        Js.Undefined.(
          {
            "type": from_opt(type_),
            "icon": from_opt(icon),
            "className": from_opt(className),
            "size": from_opt(size),
            "style": from_opt(style),
            "htmlType": from_opt(htmlType),
            "loading": from_opt(loading),
            "id": from_opt(id),
            "shape": from_opt(shape),
            "ghost": from_opt(ghost),
            "onClick": from_opt(onClick)
          }
        )
    );
};

module Layout = {
  [@bs.module] external layout : ReasonReact.reactClass = "antd/lib/layout";
  let make = (~id=?, ~className=?, ~style=?) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=layout,
      ~props=
        Js.Undefined.(
          {"id": from_opt(id), "className": from_opt(className), "style": from_opt(style)}
        )
    );
  module Header = {
    [@bs.module "antd/lib/layout"] external header : ReasonReact.reactClass = "Header";
    let make = (~id=?, ~className=?, ~style=?) =>
      ReasonReact.wrapJsForReason(
        ~reactClass=header,
        ~props=
          Js.Undefined.(
            {"id": from_opt(id), "className": from_opt(className), "style": from_opt(style)}
          )
      );
  };
  module Footer = {
    [@bs.module "antd/lib/layout"] external footer : ReasonReact.reactClass = "Footer";
    let make = (~id=?, ~className=?, ~style=?) =>
      ReasonReact.wrapJsForReason(
        ~reactClass=footer,
        ~props=
          Js.Undefined.(
            {"id": from_opt(id), "className": from_opt(className), "style": from_opt(style)}
          )
      );
  };
  module Content = {
    [@bs.module "antd/lib/layout"] external content : ReasonReact.reactClass = "Content";
    let make = (~id=?, ~className=?, ~style=?) =>
      ReasonReact.wrapJsForReason(
        ~reactClass=content,
        ~props=
          Js.Undefined.(
            {"id": from_opt(id), "className": from_opt(className), "style": from_opt(style)}
          )
      );
  };
  module Sider = {
    [@bs.module "antd/lib/layout"] external sider : ReasonReact.reactClass = "Sider";
    let make =
        (
          ~collapsedWidth=?,
          ~collapsible=?,
          ~breakpoint=?,
          ~width=?,
          ~className=?,
          ~style=?,
          ~id=?,
          ~defaultCollapsed=?,
          ~reverseArrow=?,
          ~onCollapse=?,
          ~trigger=?,
          ~collapsed=?
        ) =>
      ReasonReact.wrapJsForReason(
        ~reactClass=sider,
        ~props=
          Js.Undefined.(
            {
              "collapsedWidth": from_opt(collapsedWidth),
              "collapsible": unwrapBool(collapsible),
              "breakpoint": from_opt(breakpoint),
              "width": from_opt(width),
              "className": from_opt(className),
              "style": from_opt(style),
              "id": from_opt(id),
              "defaultCollapsed": unwrapBool(defaultCollapsed),
              "reverseArrow": unwrapBool(reverseArrow),
              "onCollapse": from_opt(onCollapse),
              "trigger": from_opt(trigger),
              "collapsed": unwrapBool(collapsed)
            }
          )
      );
  };
};

module Notification = {
  type stringOrNode;
  type options;
  type key = string;
  [@bs.module "antd/lib/notification"] external success : options => unit = "";
  [@bs.module "antd/lib/notification"] external error : options => unit = "";
  [@bs.module "antd/lib/notification"] external info : options => unit = "";
  [@bs.module "antd/lib/notification"] external warning : options => unit = "";
  [@bs.module "antd/lib/notification"] external warn : options => unit = "";
  [@bs.module "antd/lib/notification"] external close : key => unit = "";
  [@bs.module "antd/lib/notification"] external destroy : unit => unit = "";
  [@bs.module "antd/lib/notification"] external config : options => unit = "";
};

module Checkbox = {
  [@bs.module] external checkbox : ReasonReact.reactClass = "antd/lib/checkbox";
  let make =
      (
        ~defaultChecked=?,
        ~disabled=?,
        ~name=?,
        ~value=?,
        ~onMouseEnter=?,
        ~className=?,
        ~style=?,
        ~checked=?,
        ~id=?,
        ~onMouseLeave=?,
        ~onChange=?
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=checkbox,
      ~props=
        Js.Undefined.(
          {
            "defaultChecked": unwrapBool(defaultChecked),
            "disabled": unwrapBool(disabled),
            "name": from_opt(name),
            "value": from_opt(value),
            "onMouseEnter": from_opt(onMouseEnter),
            "className": from_opt(className),
            "style": from_opt(style),
            "checked": unwrapBool(checked),
            "id": from_opt(id),
            "onMouseLeave": from_opt(onMouseLeave),
            "onChange": from_opt(onChange)
          }
        )
    );
  module Group = {
    [@bs.module "antd/lib/checkbox"] external group : ReasonReact.reactClass = "Group";
    let make =
        (
          ~defaultValue=?,
          ~value=?,
          ~options=?,
          ~onChange=?,
          ~disabled=?,
          ~id=?,
          ~className=?,
          ~style=?
        ) =>
      ReasonReact.wrapJsForReason(
        ~reactClass=group,
        ~props=
          Js.Undefined.(
            {
              "defaultValue": from_opt(defaultValue),
              "value": from_opt(value),
              "options": from_opt(options),
              "onChange": from_opt(onChange),
              "disabled": unwrapBool(disabled),
              "id": from_opt(id),
              "className": from_opt(className),
              "style": from_opt(style)
            }
          )
      );
  };
};

module Transfer = {
  [@bs.module] external transfer : ReasonReact.reactClass = "antd/lib/transfer";
  let make =
      (
        ~searchPlaceholder=?,
        ~titles=?,
        ~onSelectChange=?,
        ~showSearch=?,
        ~onSearchChange=?,
        ~footer=?,
        ~className=?,
        ~style=?,
        ~notFoundContent=?,
        ~render=?,
        ~lazy_=?,
        ~dataSource=?,
        ~id=?,
        ~operations=?,
        ~onScroll=?,
        ~listStyle=?,
        ~onChange=?,
        ~filterOption=?,
        ~targetKeys=?
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=transfer,
      ~props=
        Js.Undefined.(
          {
            "searchPlaceholder": from_opt(searchPlaceholder),
            "titles": from_opt(titles),
            "onSelectChange": from_opt(onSelectChange),
            "showSearch": unwrapBool(showSearch),
            "onSearchChange": from_opt(onSearchChange),
            "footer": from_opt(footer),
            "className": from_opt(className),
            "style": from_opt(style),
            "notFoundContent": from_opt(notFoundContent),
            "render": from_opt(render),
            "lazy": from_opt(lazy_),
            "dataSource": from_opt(dataSource),
            "id": from_opt(id),
            "operations": from_opt(operations),
            "onScroll": from_opt(onScroll),
            "listStyle": from_opt(listStyle),
            "onChange": from_opt(onChange),
            "filterOption": unwrapBool(filterOption),
            "targetKeys": from_opt(targetKeys)
          }
        )
    );
};

module Popover = {
  [@bs.module] external popover : ReasonReact.reactClass = "antd/lib/popover";
  let make = (~id=?, ~className=?, ~style=?, ~title=?, ~content=?) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=popover,
      ~props=
        Js.Undefined.(
          {
            "id": from_opt(id),
            "className": from_opt(className),
            "style": from_opt(style),
            "title": from_opt(title),
            "content": from_opt(content)
          }
        )
    );
};

module AutoComplete = {
  [@bs.module] external autoComplete : ReasonReact.reactClass = "antd/lib/auto-complete";
  let make =
      (
        ~children=?,
        ~disabled=?,
        ~onSelect=?,
        ~allowClear=?,
        ~placeholder=?,
        ~value=?,
        ~backfill=?,
        ~className=?,
        ~onSearch=?,
        ~style=?,
        ~dataSource=?,
        ~id=?,
        ~defaultActiveFirstOption=?,
        ~defaultValue=?,
        ~onChange=?,
        ~filterOption=?
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=autoComplete,
      ~props=
        Js.Undefined.(
          {
            "children": from_opt(children),
            "disabled": unwrapBool(disabled),
            "onSelect": from_opt(onSelect),
            "allowClear": unwrapBool(allowClear),
            "placeholder": from_opt(placeholder),
            "value": from_opt(value),
            "backfill": unwrapBool(backfill),
            "className": from_opt(className),
            "onSearch": from_opt(onSearch),
            "style": from_opt(style),
            "dataSource": from_opt(dataSource),
            "id": from_opt(id),
            "defaultActiveFirstOption": unwrapBool(defaultActiveFirstOption),
            "defaultValue": from_opt(defaultValue),
            "onChange": from_opt(onChange),
            "filterOption": unwrapBool(filterOption)
          }
        )
    );
};

module Steps = {
  [@bs.module] external steps : ReasonReact.reactClass = "antd/lib/steps";
  let make =
      (
        ~progressDot=?,
        ~className=?,
        ~size=?,
        ~style=?,
        ~status=?,
        ~id=?,
        ~current=?,
        ~iconPrefix=?,
        ~direction=?
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=steps,
      ~props=
        Js.Undefined.(
          {
            "progressDot": from_opt(progressDot),
            "className": from_opt(className),
            "size": from_opt(size),
            "style": from_opt(style),
            "status": from_opt(status),
            "id": from_opt(id),
            "current": from_opt(current),
            "iconPrefix": from_opt(iconPrefix),
            "direction": from_opt(direction)
          }
        )
    );
  module Step = {
    [@bs.module "antd/lib/steps"] external step : ReasonReact.reactClass = "Step";
    let make = (~status=?, ~title=?, ~description=?, ~icon=?, ~id=?, ~className=?, ~style=?) =>
      ReasonReact.wrapJsForReason(
        ~reactClass=step,
        ~props=
          Js.Undefined.(
            {
              "status": from_opt(status),
              "title": from_opt(title),
              "description": from_opt(description),
              "icon": from_opt(icon),
              "id": from_opt(id),
              "className": from_opt(className),
              "style": from_opt(style)
            }
          )
      );
  };
};

module Alert = {
  [@bs.module] external alert : ReasonReact.reactClass = "antd/lib/alert";
  let make =
      (
        ~description=?,
        ~closable=?,
        ~banner=?,
        ~onClose=?,
        ~type_=?,
        ~showIcon=?,
        ~className=?,
        ~style=?,
        ~id=?,
        ~closeText=?,
        ~message=?
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=alert,
      ~props=
        Js.Undefined.(
          {
            "description": from_opt(description),
            "closable": unwrapBool(closable),
            "banner": unwrapBool(banner),
            "onClose": from_opt(onClose),
            "type": from_opt(type_),
            "showIcon": unwrapBool(showIcon),
            "className": from_opt(className),
            "style": from_opt(style),
            "id": from_opt(id),
            "closeText": from_opt(closeText),
            "message": from_opt(message)
          }
        )
    );
};

module TimePicker = {
  [@bs.module] external timePicker : ReasonReact.reactClass = "antd/lib/time-picker";
  let make =
      (
        ~onOpenChange=?,
        ~format=?,
        ~getPopupContainer=?,
        ~disabled=?,
        ~disabledSeconds=?,
        ~placeholder=?,
        ~use12Hours=?,
        ~popupClassName=?,
        ~value=?,
        ~disabledMinutes=?,
        ~hideDisabledOptions=?,
        ~className=?,
        ~style=?,
        ~disabledHours=?,
        ~id=?,
        ~defaultOpenValue=?,
        ~defaultValue=?,
        ~onChange=?,
        ~addon=?,
        ~open_=?
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=timePicker,
      ~props=
        Js.Undefined.(
          {
            "onOpenChange": from_opt(onOpenChange),
            "format": from_opt(format),
            "getPopupContainer": from_opt(getPopupContainer),
            "disabled": unwrapBool(disabled),
            "disabledSeconds": from_opt(disabledSeconds),
            "placeholder": from_opt(placeholder),
            "use12Hours": unwrapBool(use12Hours),
            "popupClassName": from_opt(popupClassName),
            "value": from_opt(value),
            "disabledMinutes": from_opt(disabledMinutes),
            "hideDisabledOptions": unwrapBool(hideDisabledOptions),
            "className": from_opt(className),
            "style": from_opt(style),
            "disabledHours": from_opt(disabledHours),
            "id": from_opt(id),
            "defaultOpenValue": from_opt(defaultOpenValue),
            "defaultValue": from_opt(defaultValue),
            "onChange": from_opt(onChange),
            "addon": from_opt(addon),
            "open": unwrapBool(open_)
          }
        )
    );
};

module Icon = {
  [@bs.module] external icon : ReasonReact.reactClass = "antd/lib/icon";
  let make = (~type_=?, ~spin=?, ~onClick=?, ~id=?, ~className=?, ~style=?) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=icon,
      ~props=
        Js.Undefined.(
          {
            "type": from_opt(type_),
            "spin": from_opt(spin),
            "onClick": from_opt(onClick),
            "id": from_opt(id),
            "className": from_opt(className),
            "style": from_opt(style)
          }
        )
    );
};

module Dropdown = {
  [@bs.module] external dropdown : ReasonReact.reactClass = "antd/lib/dropdown";
  let make =
      (
        ~align=?,
        ~disabled=?,
        ~type_=?,
        ~className=?,
        ~size=?,
        ~style=?,
        ~overlay=?,
        ~onVisibleChange=?,
        ~id=?,
        ~visible=?,
        ~placement=?,
        ~trigger=?,
        ~onClick=?
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=dropdown,
      ~props=
        Js.Undefined.(
          {
            "align": from_opt(align),
            "disabled": unwrapBool(disabled),
            "type": from_opt(type_),
            "className": from_opt(className),
            "size": from_opt(size),
            "style": from_opt(style),
            "overlay": from_opt(overlay),
            "onVisibleChange": from_opt(onVisibleChange),
            "id": from_opt(id),
            "visible": unwrapBool(visible),
            "placement": from_opt(placement),
            "trigger": from_opt(trigger),
            "onClick": from_opt(onClick)
          }
        )
    );
};

module Rate = {
  [@bs.module] external rate : ReasonReact.reactClass = "antd/lib/rate";
  let make =
      (
        ~disabled=?,
        ~allowHalf=?,
        ~value=?,
        ~onHoverChange=?,
        ~className=?,
        ~style=?,
        ~id=?,
        ~count=?,
        ~defaultValue=?,
        ~onChange=?,
        ~character=?
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=rate,
      ~props=
        Js.Undefined.(
          {
            "disabled": unwrapBool(disabled),
            "allowHalf": unwrapBool(allowHalf),
            "value": from_opt(value),
            "onHoverChange": from_opt(onHoverChange),
            "className": from_opt(className),
            "style": from_opt(style),
            "id": from_opt(id),
            "count": from_opt(count),
            "defaultValue": from_opt(defaultValue),
            "onChange": from_opt(onChange),
            "character": from_opt(character)
          }
        )
    );
};

module Modal = {
  [@bs.module] external modal : ReasonReact.reactClass = "antd/lib/modal";
  let make =
      (
        ~closable=?,
        ~getContainer=?,
        ~visible=?,
        ~okText=?,
        ~okType=?,
        ~maskClosable=?,
        ~wrapClassName=?,
        ~className=?,
        ~style=?,
        ~onCancel=?,
        ~onOk=?,
        ~width=?,
        ~id=?,
        ~footer=?,
        ~title=?,
        ~cancelText=?,
        ~confirmLoading=?,
        ~afterClose=?,
        ~zIndex=?
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=modal,
      ~props=
        Js.Undefined.(
          {
            "closable": unwrapBool(closable),
            "getContainer": from_opt(getContainer),
            "visible": unwrapBool(visible),
            "okText": from_opt(okText),
            "okType": from_opt(okType),
            "maskClosable": unwrapBool(maskClosable),
            "wrapClassName": from_opt(wrapClassName),
            "className": from_opt(className),
            "style": from_opt(style),
            "onCancel": from_opt(onCancel),
            "onOk": from_opt(onOk),
            "width": from_opt(width),
            "id": from_opt(id),
            "footer": from_opt(footer),
            "title": from_opt(title),
            "cancelText": from_opt(cancelText),
            "confirmLoading": unwrapBool(confirmLoading),
            "afterClose": from_opt(afterClose),
            "zIndex": from_opt(zIndex)
          }
        )
    );
  type options;
  type ref;
  [@bs.module "antd/lib/modal"] external info : options => ref = "";
  [@bs.module "antd/lib/modal"] external success : options => ref = "";
  [@bs.module "antd/lib/modal"] external error : options => ref = "";
  [@bs.module "antd/lib/modal"] external warning : options => ref = "";
  [@bs.module "antd/lib/modal"] external confirm : options => ref = "";
};

module Carousel = {
  [@bs.module] external carousel : ReasonReact.reactClass = "antd/lib/carousel";
  let make =
      (
        ~vertical=?,
        ~autoplay=?,
        ~afterChange=?,
        ~easing=?,
        ~className=?,
        ~style=?,
        ~id=?,
        ~effect=?,
        ~beforeChange=?,
        ~dots=?
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=carousel,
      ~props=
        Js.Undefined.(
          {
            "vertical": unwrapBool(vertical),
            "autoplay": unwrapBool(autoplay),
            "afterChange": from_opt(afterChange),
            "easing": from_opt(easing),
            "className": from_opt(className),
            "style": from_opt(style),
            "id": from_opt(id),
            "effect": from_opt(effect),
            "beforeChange": from_opt(beforeChange),
            "dots": unwrapBool(dots)
          }
        )
    );
};

module Card = {
  [@bs.module] external card : ReasonReact.reactClass = "antd/lib/card";
  let make =
      (
        ~bodyStyle=?,
        ~extra=?,
        ~bordered=?,
        ~className=?,
        ~title=?,
        ~style=?,
        ~id=?,
        ~noHovering=?,
        ~loading=?
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=card,
      ~props=
        Js.Undefined.(
          {
            "bodyStyle": from_opt(bodyStyle),
            "extra": from_opt(extra),
            "bordered": unwrapBool(bordered),
            "className": from_opt(className),
            "title": from_opt(title),
            "style": from_opt(style),
            "id": from_opt(id),
            "noHovering": unwrapBool(noHovering),
            "loading": unwrapBool(loading)
          }
        )
    );
  module Grid = {
    [@bs.module "antd/lib/card"] external grid : ReasonReact.reactClass = "Grid";
    let make = (~id=?, ~className=?, ~style=?) =>
      ReasonReact.wrapJsForReason(
        ~reactClass=grid,
        ~props=
          Js.Undefined.(
            {"id": from_opt(id), "className": from_opt(className), "style": from_opt(style)}
          )
      );
  };
};

module Calendar = {
  [@bs.module] external calendar : ReasonReact.reactClass = "antd/lib/calendar";
  let make =
      (
        ~monthFullCellRender=?,
        ~fullscreen=?,
        ~onSelect=?,
        ~locale=?,
        ~value=?,
        ~monthCellRender=?,
        ~mode=?,
        ~className=?,
        ~style=?,
        ~id=?,
        ~disabledDate=?,
        ~dateFullCellRender=?,
        ~defaultValue=?,
        ~dateCellRender=?,
        ~onPanelChange=?
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=calendar,
      ~props=
        Js.Undefined.(
          {
            "monthFullCellRender": from_opt(monthFullCellRender),
            "fullscreen": unwrapBool(fullscreen),
            "onSelect": from_opt(onSelect),
            "locale": from_opt(locale),
            "value": from_opt(value),
            "monthCellRender": from_opt(monthCellRender),
            "mode": from_opt(mode),
            "className": from_opt(className),
            "style": from_opt(style),
            "id": from_opt(id),
            "disabledDate": from_opt(disabledDate),
            "dateFullCellRender": from_opt(dateFullCellRender),
            "defaultValue": from_opt(defaultValue),
            "dateCellRender": from_opt(dateCellRender),
            "onPanelChange": from_opt(onPanelChange)
          }
        )
    );
};

module Switch_ = {
  [@bs.module] external switch_ : ReasonReact.reactClass = "antd/lib/switch";
  let make =
      (
        ~defaultChecked=?,
        ~disabled=?,
        ~checkedChildren=?,
        ~className=?,
        ~size=?,
        ~style=?,
        ~checked=?,
        ~id=?,
        ~unCheckedChildren=?,
        ~onChange=?
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=switch__,
      ~props=
        Js.Undefined.(
          {
            "defaultChecked": unwrapBool(defaultChecked),
            "disabled": unwrapBool(disabled),
            "checkedChildren": from_opt(checkedChildren),
            "className": from_opt(className),
            "size": from_opt(size),
            "style": from_opt(style),
            "checked": unwrapBool(checked),
            "id": from_opt(id),
            "unCheckedChildren": from_opt(unCheckedChildren),
            "onChange": from_opt(onChange)
          }
        )
    );
};

module DatePicker = {
  [@bs.module] external datePicker : ReasonReact.reactClass = "antd/lib/date-picker";
  let make =
      (
        ~onOpenChange=?,
        ~format=?,
        ~disabled=?,
        ~allowClear=?,
        ~placeholder=?,
        ~disabledTime=?,
        ~locale=?,
        ~getCalendarContainer=?,
        ~value=?,
        ~popupStyle=?,
        ~onOk=?,
        ~showToday=?,
        ~className=?,
        ~size=?,
        ~showTime=?,
        ~style=?,
        ~showTimeDefaultValue=?,
        ~id=?,
        ~disabledDate=?,
        ~renderExtraFooter=?,
        ~defaultValue=?,
        ~onChange=?,
        ~open_=?
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=datePicker,
      ~props=
        Js.Undefined.(
          {
            "onOpenChange": from_opt(onOpenChange),
            "format": from_opt(format),
            "disabled": unwrapBool(disabled),
            "allowClear": unwrapBool(allowClear),
            "placeholder": from_opt(placeholder),
            "disabledTime": from_opt(disabledTime),
            "locale": from_opt(locale),
            "getCalendarContainer": from_opt(getCalendarContainer),
            "value": from_opt(value),
            "popupStyle": from_opt(popupStyle),
            "onOk": from_opt(onOk),
            "showToday": unwrapBool(showToday),
            "className": from_opt(className),
            "size": from_opt(size),
            "showTime": from_opt(showTime),
            "style": from_opt(style),
            "showTime.defaultValue": from_opt(showTimeDefaultValue),
            "id": from_opt(id),
            "disabledDate": from_opt(disabledDate),
            "renderExtraFooter": from_opt(renderExtraFooter),
            "defaultValue": from_opt(defaultValue),
            "onChange": from_opt(onChange),
            "open": unwrapBool(open_)
          }
        )
    );
};

module Mention = {
  [@bs.module] external mention : ReasonReact.reactClass = "antd/lib/mention";
  let make =
      (
        ~suggestionStyle=?,
        ~getSuggestionContainer=?,
        ~disabled=?,
        ~onSelect=?,
        ~placeholder=?,
        ~value=?,
        ~onSearchChange=?,
        ~onBlur=?,
        ~className=?,
        ~prefix=?,
        ~style=?,
        ~notFoundContent=?,
        ~multiLines=?,
        ~readOnly=?,
        ~id=?,
        ~suggestions=?,
        ~defaultValue=?,
        ~onChange=?,
        ~loading=?,
        ~onFocus=?
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=mention,
      ~props=
        Js.Undefined.(
          {
            "suggestionStyle": from_opt(suggestionStyle),
            "getSuggestionContainer": from_opt(getSuggestionContainer),
            "disabled": unwrapBool(disabled),
            "onSelect": from_opt(onSelect),
            "placeholder": from_opt(placeholder),
            "value": from_opt(value),
            "onSearchChange": from_opt(onSearchChange),
            "onBlur": from_opt(onBlur),
            "className": from_opt(className),
            "prefix": from_opt(prefix),
            "style": from_opt(style),
            "notFoundContent": from_opt(notFoundContent),
            "multiLines": unwrapBool(multiLines),
            "readOnly": from_opt(readOnly),
            "id": from_opt(id),
            "suggestions": from_opt(suggestions),
            "defaultValue": from_opt(defaultValue),
            "onChange": from_opt(onChange),
            "loading": unwrapBool(loading),
            "onFocus": from_opt(onFocus)
          }
        )
    );
  type t;
  [@bs.module "antd/lib/mention"] external toString : t => string = "";
  [@bs.module "antd/lib/mention"] external toContentState : string => t = "";
  [@bs.module "antd/lib/mention"] external toEditorState : string => t = "";
  [@bs.module "antd/lib/mention"] external getMentions : t => Js.Array.t(string) = "";
  module Nav = {
    [@bs.module "antd/lib/mention"] external nav : ReasonReact.reactClass = "Nav";
    let make = (~value=?, ~data=?, ~disabled=?, ~id=?, ~className=?, ~style=?) =>
      ReasonReact.wrapJsForReason(
        ~reactClass=nav,
        ~props=
          Js.Undefined.(
            {
              "value": from_opt(value),
              "data": from_opt(data),
              "disabled": unwrapBool(disabled),
              "id": from_opt(id),
              "className": from_opt(className),
              "style": from_opt(style)
            }
          )
      );
  };
};

module Pagination = {
  [@bs.module] external pagination : ReasonReact.reactClass = "antd/lib/pagination";
  let make =
      (
        ~simple=?,
        ~showSizeChanger=?,
        ~defaultPageSize=?,
        ~itemRender=?,
        ~showTotal=?,
        ~className=?,
        ~size=?,
        ~style=?,
        ~showQuickJumper=?,
        ~total=?,
        ~pageSize=?,
        ~id=?,
        ~current=?,
        ~pageSizeOptions=?,
        ~onShowSizeChange=?,
        ~onChange=?,
        ~defaultCurrent=?
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=pagination,
      ~props=
        Js.Undefined.(
          {
            "simple": unwrapBool(simple),
            "showSizeChanger": unwrapBool(showSizeChanger),
            "defaultPageSize": from_opt(defaultPageSize),
            "itemRender": from_opt(itemRender),
            "showTotal": from_opt(showTotal),
            "className": from_opt(className),
            "size": from_opt(size),
            "style": from_opt(style),
            "showQuickJumper": unwrapBool(showQuickJumper),
            "total": from_opt(total),
            "pageSize": from_opt(pageSize),
            "id": from_opt(id),
            "current": from_opt(current),
            "pageSizeOptions": from_opt(pageSizeOptions),
            "onShowSizeChange": from_opt(onShowSizeChange),
            "onChange": from_opt(onChange),
            "defaultCurrent": from_opt(defaultCurrent)
          }
        )
    );
};

module Cascader = {
  [@bs.module] external cascader : ReasonReact.reactClass = "antd/lib/cascader";
  let make =
      (
        ~getPopupContainer=?,
        ~disabled=?,
        ~allowClear=?,
        ~loadData=?,
        ~placeholder=?,
        ~showSearch=?,
        ~popupClassName=?,
        ~value=?,
        ~onPopupVisibleChange=?,
        ~displayRender=?,
        ~className=?,
        ~size=?,
        ~style=?,
        ~notFoundContent=?,
        ~changeOnSelect=?,
        ~id=?,
        ~expandTrigger=?,
        ~popupPlacement=?,
        ~options=?,
        ~defaultValue=?,
        ~onChange=?
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=cascader,
      ~props=
        Js.Undefined.(
          {
            "getPopupContainer": from_opt(getPopupContainer),
            "disabled": unwrapBool(disabled),
            "allowClear": unwrapBool(allowClear),
            "loadData": from_opt(loadData),
            "placeholder": from_opt(placeholder),
            "showSearch": unwrapBool(showSearch),
            "popupClassName": from_opt(popupClassName),
            "value": from_opt(value),
            "onPopupVisibleChange": from_opt(onPopupVisibleChange),
            "displayRender": from_opt(displayRender),
            "className": from_opt(className),
            "size": from_opt(size),
            "style": from_opt(style),
            "notFoundContent": from_opt(notFoundContent),
            "changeOnSelect": unwrapBool(changeOnSelect),
            "id": from_opt(id),
            "expandTrigger": from_opt(expandTrigger),
            "popupPlacement": from_opt(popupPlacement),
            "options": from_opt(options),
            "defaultValue": from_opt(defaultValue),
            "onChange": from_opt(onChange)
          }
        )
    );
};

module Col = {
  [@bs.module] external col : ReasonReact.reactClass = "antd/lib/col";
  let make =
      (
        ~push=?,
        ~lg=?,
        ~offset=?,
        ~sm=?,
        ~xs=?,
        ~className=?,
        ~style=?,
        ~id=?,
        ~order=?,
        ~xl=?,
        ~pull=?,
        ~md=?,
        ~span=?
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=col,
      ~props=
        Js.Undefined.(
          {
            "push": from_opt(push),
            "lg": from_opt(lg),
            "offset": from_opt(offset),
            "sm": from_opt(sm),
            "xs": from_opt(xs),
            "className": from_opt(className),
            "style": from_opt(style),
            "id": from_opt(id),
            "order": from_opt(order),
            "xl": from_opt(xl),
            "pull": from_opt(pull),
            "md": from_opt(md),
            "span": from_opt(span)
          }
        )
    );
};

module Spin = {
  [@bs.module] external spin : ReasonReact.reactClass = "antd/lib/spin";
  let make =
      (~size=?, ~spinning=?, ~tip=?, ~delay=?, ~wrapperClassName=?, ~id=?, ~className=?, ~style=?) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=spin,
      ~props=
        Js.Undefined.(
          {
            "size": from_opt(size),
            "spinning": unwrapBool(spinning),
            "tip": from_opt(tip),
            "delay": from_opt(delay),
            "wrapperClassName": from_opt(wrapperClassName),
            "id": from_opt(id),
            "className": from_opt(className),
            "style": from_opt(style)
          }
        )
    );
};

module Avatar = {
  [@bs.module] external avatar : ReasonReact.reactClass = "antd/lib/avatar";
  let make = (~props=?, ~size=?, ~src=?, ~icon=?, ~id=?, ~className=?, ~style=?) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=avatar,
      ~props=
        Js.Undefined.(
          {
            "props": from_opt(props),
            "size": from_opt(size),
            "src": from_opt(src),
            "icon": from_opt(icon),
            "id": from_opt(id),
            "className": from_opt(className),
            "style": from_opt(style)
          }
        )
    );
};

module TreeSelect = {
  [@bs.module] external treeSelect : ReasonReact.reactClass = "antd/lib/tree-select";
  let make =
      (
        ~multiple=?,
        ~treeCheckStrictly=?,
        ~treeData=?,
        ~treeNodeLabelProp=?,
        ~searchPlaceholder=?,
        ~getPopupContainer=?,
        ~disabled=?,
        ~treeDataSimpleMode=?,
        ~onSelect=?,
        ~allowClear=?,
        ~loadData=?,
        ~placeholder=?,
        ~treeCheckable=?,
        ~showSearch=?,
        ~value=?,
        ~dropdownStyle=?,
        ~filterTreeNode=?,
        ~labelInValue=?,
        ~className=?,
        ~size=?,
        ~onSearch=?,
        ~style=?,
        ~treeDefaultExpandAll=?,
        ~dropdownMatchSelectWidth=?,
        ~id=?,
        ~treeNodeFilterProp=?,
        ~treeDefaultExpandedKeys=?,
        ~defaultValue=?,
        ~onChange=?,
        ~showCheckedStrategy=?
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=treeSelect,
      ~props=
        Js.Undefined.(
          {
            "multiple": unwrapBool(multiple),
            "treeCheckStrictly": unwrapBool(treeCheckStrictly),
            "treeData": from_opt(treeData),
            "treeNodeLabelProp": from_opt(treeNodeLabelProp),
            "searchPlaceholder": from_opt(searchPlaceholder),
            "getPopupContainer": from_opt(getPopupContainer),
            "disabled": unwrapBool(disabled),
            "treeDataSimpleMode": from_opt(treeDataSimpleMode),
            "onSelect": from_opt(onSelect),
            "allowClear": unwrapBool(allowClear),
            "loadData": from_opt(loadData),
            "placeholder": from_opt(placeholder),
            "treeCheckable": unwrapBool(treeCheckable),
            "showSearch": unwrapBool(showSearch),
            "value": from_opt(value),
            "dropdownStyle": from_opt(dropdownStyle),
            "filterTreeNode": unwrapBool(filterTreeNode),
            "labelInValue": from_opt(labelInValue),
            "className": from_opt(className),
            "size": from_opt(size),
            "onSearch": from_opt(onSearch),
            "style": from_opt(style),
            "treeDefaultExpandAll": unwrapBool(treeDefaultExpandAll),
            "dropdownMatchSelectWidth": unwrapBool(dropdownMatchSelectWidth),
            "id": from_opt(id),
            "treeNodeFilterProp": from_opt(treeNodeFilterProp),
            "treeDefaultExpandedKeys": from_opt(treeDefaultExpandedKeys),
            "defaultValue": from_opt(defaultValue),
            "onChange": from_opt(onChange),
            "showCheckedStrategy": from_opt(showCheckedStrategy)
          }
        )
    );
  module TreeNode = {
    [@bs.module "antd/lib/tree-select"] external treeNode : ReasonReact.reactClass = "TreeNode";
    let make =
        (
          ~disabled=?,
          ~disableCheckbox=?,
          ~isLeaf=?,
          ~key=?,
          ~value=?,
          ~className=?,
          ~title=?,
          ~style=?,
          ~id=?
        ) =>
      ReasonReact.wrapJsForReason(
        ~reactClass=treeNode,
        ~props=
          Js.Undefined.(
            {
              "disabled": unwrapBool(disabled),
              "disableCheckbox": unwrapBool(disableCheckbox),
              "isLeaf": unwrapBool(isLeaf),
              "key": from_opt(key),
              "value": from_opt(value),
              "className": from_opt(className),
              "title": from_opt(title),
              "style": from_opt(style),
              "id": from_opt(id)
            }
          )
      );
  };
};

module BackTop = {
  [@bs.module] external backTop : ReasonReact.reactClass = "antd/lib/back-top";
  let make = (~visibilityHeight=?, ~onClick=?, ~target=?, ~id=?, ~className=?, ~style=?) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=backTop,
      ~props=
        Js.Undefined.(
          {
            "visibilityHeight": from_opt(visibilityHeight),
            "onClick": from_opt(onClick),
            "target": from_opt(target),
            "id": from_opt(id),
            "className": from_opt(className),
            "style": from_opt(style)
          }
        )
    );
};

module Breadcrumb = {
  [@bs.module] external breadcrumb : ReasonReact.reactClass = "antd/lib/breadcrumb";
  let make = (~routes=?, ~params=?, ~separator=?, ~itemRender=?, ~id=?, ~className=?, ~style=?) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=breadcrumb,
      ~props=
        Js.Undefined.(
          {
            "routes": from_opt(routes),
            "params": from_opt(params),
            "separator": from_opt(separator),
            "itemRender": from_opt(itemRender),
            "id": from_opt(id),
            "className": from_opt(className),
            "style": from_opt(style)
          }
        )
    );
  module Item = {
    [@bs.module "antd/lib/breadcrumb"] external item : ReasonReact.reactClass = "Item";
    let make = (~id=?, ~className=?, ~style=?, ~separator=?, ~href=?) =>
      ReasonReact.wrapJsForReason(
        ~reactClass=item,
        ~props=
          Js.Undefined.(
            {
              "id": from_opt(id),
              "className": from_opt(className),
              "style": from_opt(style),
              "separator": from_opt(separator),
              "href": from_opt(href)
            }
          )
      );
  };
};

module Collapse = {
  [@bs.module] external collapse : ReasonReact.reactClass = "antd/lib/collapse";
  let make = (~activeKey=?, ~defaultActiveKey=?, ~onChange=?, ~id=?, ~className=?, ~style=?) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=collapse,
      ~props=
        Js.Undefined.(
          {
            "activeKey": from_opt(activeKey),
            "defaultActiveKey": from_opt(defaultActiveKey),
            "onChange": from_opt(onChange),
            "id": from_opt(id),
            "className": from_opt(className),
            "style": from_opt(style)
          }
        )
    );
  module Panel = {
    [@bs.module "antd/lib/collapse"] external panel : ReasonReact.reactClass = "Panel";
    let make = (~key=?, ~header=?, ~disabled=?, ~id=?, ~className=?, ~style=?) =>
      ReasonReact.wrapJsForReason(
        ~reactClass=panel,
        ~props=
          Js.Undefined.(
            {
              "key": from_opt(key),
              "header": from_opt(header),
              "disabled": unwrapBool(disabled),
              "id": from_opt(id),
              "className": from_opt(className),
              "style": from_opt(style)
            }
          )
      );
  };
};

module Form = {
  [@bs.module] external form : ReasonReact.reactClass = "antd/lib/form";
  let make = (~layout=?, ~onSubmit=?, ~hideRequiredMark=?, ~id=?, ~className=?, ~style=?) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=form,
      ~props=
        Js.Undefined.(
          {
            "layout": from_opt(layout),
            "onSubmit": from_opt(onSubmit),
            "hideRequiredMark": unwrapBool(hideRequiredMark),
            "id": from_opt(id),
            "className": from_opt(className),
            "style": from_opt(style)
          }
        )
    );
  type wrapper = [@bs] (ReasonReact.reactClass => ReasonReact.reactClass);
  [@bs.module "antd/lib/form"] external create : unit => wrapper = "create";
  let wrapper = (~component, ~make', ~props, ~children) => {
    let wrapper = create();
    let reactClass' = ReasonReact.wrapReasonForJs(~component=component, (_) => make'([||]));
    let reactClass = [@bs] wrapper(reactClass');
    ReasonReact.wrapJsForReason(~reactClass=reactClass, ~props=props, children);
  };
  module Item = {
    [@bs.module "antd/lib/form"] external item : ReasonReact.reactClass = "Item";
    let make =
        (
          ~colon=?,
          ~validateStatus=?,
          ~extra=?,
          ~className=?,
          ~required=?,
          ~style=?,
          ~label=?,
          ~id=?,
          ~wrapperCol=?,
          ~help=?,
          ~hasFeedback=?,
          ~labelCol=?
        ) =>
      ReasonReact.wrapJsForReason(
        ~reactClass=item,
        ~props=
          Js.Undefined.(
            {
              "colon": unwrapBool(colon),
              "validateStatus": from_opt(validateStatus),
              "extra": from_opt(extra),
              "className": from_opt(className),
              "required": unwrapBool(required),
              "style": from_opt(style),
              "label": from_opt(label),
              "id": from_opt(id),
              "wrapperCol": from_opt(wrapperCol),
              "help": from_opt(help),
              "hasFeedback": unwrapBool(hasFeedback),
              "labelCol": from_opt(labelCol)
            }
          )
      );
  };
};

module Tag = {
  [@bs.module] external tag : ReasonReact.reactClass = "antd/lib/tag";
  let make = (~color=?, ~closable=?, ~onClose=?, ~afterClose=?, ~id=?, ~className=?, ~style=?) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=tag,
      ~props=
        Js.Undefined.(
          {
            "color": from_opt(color),
            "closable": unwrapBool(closable),
            "onClose": from_opt(onClose),
            "afterClose": from_opt(afterClose),
            "id": from_opt(id),
            "className": from_opt(className),
            "style": from_opt(style)
          }
        )
    );
  module CheckableTag = {
    [@bs.module "antd/lib/tag"] external checkableTag : ReasonReact.reactClass = "CheckableTag";
    let make = (~id=?, ~className=?, ~style=?, ~checked=?, ~onChange=?) =>
      ReasonReact.wrapJsForReason(
        ~reactClass=checkableTag,
        ~props=
          Js.Undefined.(
            {
              "id": from_opt(id),
              "className": from_opt(className),
              "style": from_opt(style),
              "checked": unwrapBool(checked),
              "onChange": from_opt(onChange)
            }
          )
      );
  };
};

module Anchor = {
  [@bs.module] external anchor : ReasonReact.reactClass = "antd/lib/anchor";
  let make =
      (
        ~offsetTop=?,
        ~offsetBottom=?,
        ~bounds=?,
        ~affix=?,
        ~showInkInFixed=?,
        ~id=?,
        ~className=?,
        ~style=?
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=anchor,
      ~props=
        Js.Undefined.(
          {
            "offsetTop": from_opt(offsetTop),
            "offsetBottom": from_opt(offsetBottom),
            "bounds": from_opt(bounds),
            "affix": unwrapBool(affix),
            "showInkInFixed": unwrapBool(showInkInFixed),
            "id": from_opt(id),
            "className": from_opt(className),
            "style": from_opt(style)
          }
        )
    );
  module Link = {
    [@bs.module "antd/lib/anchor"] external link : ReasonReact.reactClass = "Link";
    let make = (~id=?, ~className=?, ~style=?, ~href=?, ~title=?) =>
      ReasonReact.wrapJsForReason(
        ~reactClass=link,
        ~props=
          Js.Undefined.(
            {
              "id": from_opt(id),
              "className": from_opt(className),
              "style": from_opt(style),
              "href": from_opt(href),
              "title": from_opt(title)
            }
          )
      );
  };
};

module Input = {
  [@bs.module] external input : ReasonReact.reactClass = "antd/lib/input";
  let make =
      (
        ~suffix=?,
        ~disabled=?,
        ~addonAfter=?,
        ~placeholder=?,
        ~value=?,
        ~type_=?,
        ~addonBefore=?,
        ~className=?,
        ~size=?,
        ~prefix=?,
        ~style=?,
        ~onPressEnter=?,
        ~id=?,
        ~defaultValue=?,
        ~onChange=?
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=input,
      ~props=
        Js.Undefined.(
          {
            "suffix": from_opt(suffix),
            "disabled": unwrapBool(disabled),
            "addonAfter": from_opt(addonAfter),
            "placeholder": from_opt(placeholder),
            "value": from_opt(value),
            "type": from_opt(type_),
            "addonBefore": from_opt(addonBefore),
            "className": from_opt(className),
            "size": from_opt(size),
            "prefix": from_opt(prefix),
            "style": from_opt(style),
            "onPressEnter": from_opt(onPressEnter),
            "id": from_opt(id),
            "defaultValue": from_opt(defaultValue),
            "onChange": from_opt(onChange)
          }
        )
    );
  module TextArea = {
    [@bs.module "antd/lib/input"] external textArea : ReasonReact.reactClass = "TextArea";
    let make =
        (~defaultValue=?, ~value=?, ~onPressEnter=?, ~autosize=?, ~id=?, ~className=?, ~style=?) =>
      ReasonReact.wrapJsForReason(
        ~reactClass=textArea,
        ~props=
          Js.Undefined.(
            {
              "defaultValue": from_opt(defaultValue),
              "value": from_opt(value),
              "onPressEnter": from_opt(onPressEnter),
              "autosize": unwrapBool(autosize),
              "id": from_opt(id),
              "className": from_opt(className),
              "style": from_opt(style)
            }
          )
      );
  };
  module Search = {
    [@bs.module "antd/lib/input"] external search : ReasonReact.reactClass = "Search";
    let make = (~id=?, ~className=?, ~style=?, ~onSearch=?) =>
      ReasonReact.wrapJsForReason(
        ~reactClass=search,
        ~props=
          Js.Undefined.(
            {
              "id": from_opt(id),
              "className": from_opt(className),
              "style": from_opt(style),
              "onSearch": from_opt(onSearch)
            }
          )
      );
  };
  module Group = {
    [@bs.module "antd/lib/input"] external group : ReasonReact.reactClass = "Group";
    let make = (~id=?, ~className=?, ~style=?, ~size=?, ~compact=?) =>
      ReasonReact.wrapJsForReason(
        ~reactClass=group,
        ~props=
          Js.Undefined.(
            {
              "id": from_opt(id),
              "className": from_opt(className),
              "style": from_opt(style),
              "size": from_opt(size),
              "compact": unwrapBool(compact)
            }
          )
      );
  };
};

module Timeline = {
  [@bs.module] external timeline : ReasonReact.reactClass = "antd/lib/timeline";
  let make = (~id=?, ~className=?, ~style=?, ~pending=?) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=timeline,
      ~props=
        Js.Undefined.(
          {
            "id": from_opt(id),
            "className": from_opt(className),
            "style": from_opt(style),
            "pending": from_opt(pending)
          }
        )
    );
  module Item = {
    [@bs.module "antd/lib/timeline"] external item : ReasonReact.reactClass = "Item";
    let make = (~id=?, ~className=?, ~style=?, ~color=?, ~dot=?) =>
      ReasonReact.wrapJsForReason(
        ~reactClass=item,
        ~props=
          Js.Undefined.(
            {
              "id": from_opt(id),
              "className": from_opt(className),
              "style": from_opt(style),
              "color": from_opt(color),
              "dot": from_opt(dot)
            }
          )
      );
  };
};

module Progress = {
  [@bs.module] external progress : ReasonReact.reactClass = "antd/lib/progress";
  let make =
      (
        ~format=?,
        ~gapDegree=?,
        ~width=?,
        ~type_=?,
        ~className=?,
        ~style=?,
        ~status=?,
        ~strokeWidth=?,
        ~id=?,
        ~percent=?,
        ~showInfo=?,
        ~gapPosition=?
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=progress,
      ~props=
        Js.Undefined.(
          {
            "format": from_opt(format),
            "gapDegree": from_opt(gapDegree),
            "width": from_opt(width),
            "type": from_opt(type_),
            "className": from_opt(className),
            "style": from_opt(style),
            "status": from_opt(status),
            "strokeWidth": from_opt(strokeWidth),
            "id": from_opt(id),
            "percent": from_opt(percent),
            "showInfo": unwrapBool(showInfo),
            "gapPosition": from_opt(gapPosition)
          }
        )
    );
};

module Badge = {
  [@bs.module] external badge : ReasonReact.reactClass = "antd/lib/badge";
  let make =
      (
        ~overflowCount=?,
        ~className=?,
        ~style=?,
        ~status=?,
        ~id=?,
        ~showZero=?,
        ~count=?,
        ~dot=?,
        ~text=?
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=badge,
      ~props=
        Js.Undefined.(
          {
            "overflowCount": from_opt(overflowCount),
            "className": from_opt(className),
            "style": from_opt(style),
            "status": from_opt(status),
            "id": from_opt(id),
            "showZero": unwrapBool(showZero),
            "count": from_opt(count),
            "dot": unwrapBool(dot),
            "text": from_opt(text)
          }
        )
    );
};

module Menu = {
  [@bs.module] external menu : ReasonReact.reactClass = "antd/lib/menu";
  let make =
      (
        ~onOpenChange=?,
        ~selectedKeys=?,
        ~onSelect=?,
        ~mode=?,
        ~multiple=?,
        ~inlineIndent=?,
        ~className=?,
        ~style=?,
        ~theme=?,
        ~openAnimation=?,
        ~id=?,
        ~openKeys=?,
        ~defaultSelectedKeys=?,
        ~defaultOpenKeys=?,
        ~onDeselect=?,
        ~onClick=?,
        ~selectable=?,
        ~inlineCollapsed=?,
        ~openTransitionName=?
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=menu,
      ~props=
        Js.Undefined.(
          {
            "onOpenChange": from_opt(onOpenChange),
            "selectedKeys": from_opt(selectedKeys),
            "onSelect": from_opt(onSelect),
            "mode": from_opt(mode),
            "multiple": from_opt(multiple),
            "inlineIndent": from_opt(inlineIndent),
            "className": from_opt(className),
            "style": from_opt(style),
            "theme": from_opt(theme),
            "openAnimation": from_opt(openAnimation),
            "id": from_opt(id),
            "openKeys": from_opt(openKeys),
            "defaultSelectedKeys": from_opt(defaultSelectedKeys),
            "defaultOpenKeys": from_opt(defaultOpenKeys),
            "onDeselect": from_opt(onDeselect),
            "onClick": from_opt(onClick),
            "selectable": from_opt(selectable),
            "inlineCollapsed": from_opt(inlineCollapsed),
            "openTransitionName": from_opt(openTransitionName)
          }
        )
    );
  module Divider = {
    [@bs.module "antd/lib/menu"] external divider : ReasonReact.reactClass = "Divider";
    let make = (~id=?, ~className=?, ~style=?, ~disabled=?) =>
      ReasonReact.wrapJsForReason(
        ~reactClass=divider,
        ~props=
          Js.Undefined.(
            {
              "id": from_opt(id),
              "className": from_opt(className),
              "style": from_opt(style),
              "disabled": unwrapBool(disabled)
            }
          )
      );
  };
  module Item = {
    [@bs.module "antd/lib/menu"] external item : ReasonReact.reactClass = "Item";
    let make = (~id=?, ~className=?, ~style=?, ~disabled=?, ~key=?) =>
      ReasonReact.wrapJsForReason(
        ~reactClass=item,
        ~props=
          Js.Undefined.(
            {
              "id": from_opt(id),
              "className": from_opt(className),
              "style": from_opt(style),
              "disabled": unwrapBool(disabled),
              "key": from_opt(key)
            }
          )
      );
  };
  module SubMenu = {
    [@bs.module "antd/lib/menu"] external subMenu : ReasonReact.reactClass = "SubMenu";
    let make =
        (
          ~disabled=?,
          ~key=?,
          ~title=?,
          ~children=?,
          ~onTitleClick=?,
          ~id=?,
          ~className=?,
          ~style=?
        ) =>
      ReasonReact.wrapJsForReason(
        ~reactClass=subMenu,
        ~props=
          Js.Undefined.(
            {
              "disabled": unwrapBool(disabled),
              "key": from_opt(key),
              "title": from_opt(title),
              "children": from_opt(children),
              "onTitleClick": from_opt(onTitleClick),
              "id": from_opt(id),
              "className": from_opt(className),
              "style": from_opt(style)
            }
          )
      );
  };
  module ItemGroup = {
    [@bs.module "antd/lib/menu"] external itemGroup : ReasonReact.reactClass = "ItemGroup";
    let make = (~id=?, ~className=?, ~style=?, ~title=?, ~children=?) =>
      ReasonReact.wrapJsForReason(
        ~reactClass=itemGroup,
        ~props=
          Js.Undefined.(
            {
              "id": from_opt(id),
              "className": from_opt(className),
              "style": from_opt(style),
              "title": from_opt(title),
              "children": from_opt(children)
            }
          )
      );
  };
};

module Tooltip = {
  [@bs.module] external tooltip : ReasonReact.reactClass = "antd/lib/tooltip";
  let make =
      (
        ~arrowPointAtCenter=?,
        ~getPopupContainer=?,
        ~autoAdjustOverflow=?,
        ~mouseEnterDelay=?,
        ~mouseLeaveDelay=?,
        ~className=?,
        ~title=?,
        ~style=?,
        ~overlay=?,
        ~onVisibleChange=?,
        ~id=?,
        ~overlayStyle=?,
        ~overlayClassName=?,
        ~visible=?,
        ~placement=?,
        ~trigger=?
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=tooltip,
      ~props=
        Js.Undefined.(
          {
            "arrowPointAtCenter": unwrapBool(arrowPointAtCenter),
            "getPopupContainer": from_opt(getPopupContainer),
            "autoAdjustOverflow": unwrapBool(autoAdjustOverflow),
            "mouseEnterDelay": from_opt(mouseEnterDelay),
            "mouseLeaveDelay": from_opt(mouseLeaveDelay),
            "className": from_opt(className),
            "title": from_opt(title),
            "style": from_opt(style),
            "overlay": from_opt(overlay),
            "onVisibleChange": from_opt(onVisibleChange),
            "id": from_opt(id),
            "overlayStyle": from_opt(overlayStyle),
            "overlayClassName": from_opt(overlayClassName),
            "visible": unwrapBool(visible),
            "placement": from_opt(placement),
            "trigger": from_opt(trigger)
          }
        )
    );
};

module Upload = {
  [@bs.module] external upload : ReasonReact.reactClass = "antd/lib/upload";
  let make =
      (
        ~withCredentials=?,
        ~multiple=?,
        ~defaultFileList=?,
        ~disabled=?,
        ~listType=?,
        ~name=?,
        ~className=?,
        ~headers=?,
        ~style=?,
        ~id=?,
        ~customRequest=?,
        ~showUploadList=?,
        ~action=?,
        ~supportServerRender=?,
        ~onChange=?,
        ~beforeUpload=?,
        ~onRemove=?,
        ~fileList=?,
        ~accept=?,
        ~onPreview=?,
        ~data=?
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=upload,
      ~props=
        Js.Undefined.(
          {
            "withCredentials": unwrapBool(withCredentials),
            "multiple": unwrapBool(multiple),
            "defaultFileList": from_opt(defaultFileList),
            "disabled": unwrapBool(disabled),
            "listType": from_opt(listType),
            "name": from_opt(name),
            "className": from_opt(className),
            "headers": from_opt(headers),
            "style": from_opt(style),
            "id": from_opt(id),
            "customRequest": from_opt(customRequest),
            "showUploadList": unwrapBool(showUploadList),
            "action": from_opt(action),
            "supportServerRender": unwrapBool(supportServerRender),
            "onChange": from_opt(onChange),
            "beforeUpload": from_opt(beforeUpload),
            "onRemove": from_opt(onRemove),
            "fileList": from_opt(fileList),
            "accept": from_opt(accept),
            "onPreview": from_opt(onPreview),
            "data": from_opt(data)
          }
        )
    );
};

module InputNumber = {
  [@bs.module] external inputNumber : ReasonReact.reactClass = "antd/lib/input-number";
  let make =
      (
        ~min=?,
        ~disabled=?,
        ~formatter=?,
        ~value=?,
        ~precision=?,
        ~className=?,
        ~size=?,
        ~style=?,
        ~parser=?,
        ~max=?,
        ~id=?,
        ~defaultValue=?,
        ~onChange=?,
        ~step=?
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=inputNumber,
      ~props=
        Js.Undefined.(
          {
            "min": from_opt(min),
            "disabled": unwrapBool(disabled),
            "formatter": from_opt(formatter),
            "value": from_opt(value),
            "precision": from_opt(precision),
            "className": from_opt(className),
            "size": from_opt(size),
            "style": from_opt(style),
            "parser": from_opt(parser),
            "max": from_opt(max),
            "id": from_opt(id),
            "defaultValue": from_opt(defaultValue),
            "onChange": from_opt(onChange),
            "step": from_opt(step)
          }
        )
    );
};

module Message = {
  type content;
  type duration = int;
  type options;
  type callback = [@bs] (unit => unit);
  [@bs.module "antd/lib/message"] external success : (content, duration, callback) => unit = "";
  [@bs.module "antd/lib/message"] external error : (content, duration, callback) => unit = "";
  [@bs.module "antd/lib/message"] external info : (content, duration, callback) => unit = "";
  [@bs.module "antd/lib/message"] external warning : (content, duration, callback) => unit = "";
  [@bs.module "antd/lib/message"] external warn : (content, duration, callback) => unit = "";
  [@bs.module "antd/lib/message"] external loading : (content, duration, callback) => unit = "";
  [@bs.module "antd/lib/message"] external config : options => unit = "";
  [@bs.module "antd/lib/message"] external destroy : unit => unit = "";
};

module Row = {
  [@bs.module] external row : ReasonReact.reactClass = "antd/lib/row";
  let make = (~type_=?, ~gutter=?, ~align=?, ~justify=?, ~id=?, ~className=?, ~style=?) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=row,
      ~props=
        Js.Undefined.(
          {
            "type": from_opt(type_),
            "gutter": from_opt(gutter),
            "align": from_opt(align),
            "justify": from_opt(justify),
            "id": from_opt(id),
            "className": from_opt(className),
            "style": from_opt(style)
          }
        )
    );
};

module Select = {
  [@bs.module] external select : ReasonReact.reactClass = "antd/lib/select";
  let make =
      (
        ~multiple=?,
        ~getPopupContainer=?,
        ~disabled=?,
        ~optionLabelProp=?,
        ~onSelect=?,
        ~allowClear=?,
        ~placeholder=?,
        ~showSearch=?,
        ~value=?,
        ~mode=?,
        ~dropdownStyle=?,
        ~onBlur=?,
        ~firstActiveValue=?,
        ~className=?,
        ~size=?,
        ~dropdownClassName=?,
        ~onSearch=?,
        ~style=?,
        ~notFoundContent=?,
        ~labelInValue=?,
        ~dropdownMatchSelectWidth=?,
        ~tags=?,
        ~id=?,
        ~defaultActiveFirstOption=?,
        ~optionFilterProp=?,
        ~defaultValue=?,
        ~onChange=?,
        ~combobox=?,
        ~filterOption=?,
        ~tokenSeparators=?,
        ~onDeselect=?,
        ~onFocus=?
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=select,
      ~props=
        Js.Undefined.(
          {
            "multiple": unwrapBool(multiple),
            "getPopupContainer": from_opt(getPopupContainer),
            "disabled": unwrapBool(disabled),
            "optionLabelProp": from_opt(optionLabelProp),
            "onSelect": from_opt(onSelect),
            "allowClear": unwrapBool(allowClear),
            "placeholder": from_opt(placeholder),
            "showSearch": unwrapBool(showSearch),
            "value": from_opt(value),
            "mode": from_opt(mode),
            "dropdownStyle": from_opt(dropdownStyle),
            "onBlur": from_opt(onBlur),
            "firstActiveValue": from_opt(firstActiveValue),
            "className": from_opt(className),
            "size": from_opt(size),
            "dropdownClassName": from_opt(dropdownClassName),
            "onSearch": from_opt(onSearch),
            "style": from_opt(style),
            "notFoundContent": from_opt(notFoundContent),
            "labelInValue": unwrapBool(labelInValue),
            "dropdownMatchSelectWidth": unwrapBool(dropdownMatchSelectWidth),
            "tags": unwrapBool(tags),
            "id": from_opt(id),
            "defaultActiveFirstOption": unwrapBool(defaultActiveFirstOption),
            "optionFilterProp": from_opt(optionFilterProp),
            "defaultValue": from_opt(defaultValue),
            "onChange": from_opt(onChange),
            "combobox": unwrapBool(combobox),
            "filterOption": unwrapBool(filterOption),
            "tokenSeparators": from_opt(tokenSeparators),
            "onDeselect": from_opt(onDeselect),
            "onFocus": from_opt(onFocus)
          }
        )
    );
  module Option = {
    [@bs.module "antd/lib/select"] external option : ReasonReact.reactClass = "Option";
    let make = (~value=?, ~key=?, ~title=?, ~disabled=?, ~id=?, ~className=?, ~style=?) =>
      ReasonReact.wrapJsForReason(
        ~reactClass=option,
        ~props=
          Js.Undefined.(
            {
              "value": from_opt(value),
              "key": from_opt(key),
              "title": from_opt(title),
              "disabled": unwrapBool(disabled),
              "id": from_opt(id),
              "className": from_opt(className),
              "style": from_opt(style)
            }
          )
      );
  };
  module OptGroup = {
    [@bs.module "antd/lib/select"] external optGroup : ReasonReact.reactClass = "OptGroup";
    let make = (~id=?, ~className=?, ~style=?, ~label=?, ~key=?) =>
      ReasonReact.wrapJsForReason(
        ~reactClass=optGroup,
        ~props=
          Js.Undefined.(
            {
              "id": from_opt(id),
              "className": from_opt(className),
              "style": from_opt(style),
              "label": from_opt(label),
              "key": from_opt(key)
            }
          )
      );
  };
};

module Slider = {
  [@bs.module] external slider : ReasonReact.reactClass = "antd/lib/slider";
  let make =
      (
        ~onAfterChange=?,
        ~min=?,
        ~disabled=?,
        ~vertical=?,
        ~value=?,
        ~range=?,
        ~included=?,
        ~className=?,
        ~style=?,
        ~max=?,
        ~id=?,
        ~marks=?,
        ~tipFormatter=?,
        ~defaultValue=?,
        ~onChange=?,
        ~step=?,
        ~dots=?
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=slider,
      ~props=
        Js.Undefined.(
          {
            "onAfterChange": from_opt(onAfterChange),
            "min": from_opt(min),
            "disabled": unwrapBool(disabled),
            "vertical": unwrapBool(vertical),
            "value": from_opt(value),
            "range": unwrapBool(range),
            "included": unwrapBool(included),
            "className": from_opt(className),
            "style": from_opt(style),
            "max": from_opt(max),
            "id": from_opt(id),
            "marks": from_opt(marks),
            "tipFormatter": from_opt(tipFormatter),
            "defaultValue": from_opt(defaultValue),
            "onChange": from_opt(onChange),
            "step": from_opt(step),
            "dots": unwrapBool(dots)
          }
        )
    );
};
