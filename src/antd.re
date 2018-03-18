let optBoolToOptJsBoolean =
  fun
  | None => None
  | Some v => Some (Js.Boolean.to_js_boolean v);

let unwrapBool v => Js.Undefined.fromOption @@ optBoolToOptJsBoolean v;

module Popconfirm = {
  external popconfirm : ReasonReact.reactClass = "antd/lib/popconfirm" [@@bs.module];
  let make
      ::onCancel=?
      ::className=?
      ::title=?
      ::cancelText=?
      ::style=?
      ::id=?
      ::onConfirm=?
      ::okText=?
      ::okType=? =>
    ReasonReact.wrapJsForReason
      reactClass::popconfirm
      props::
        Js.Undefined.(
          {
            "onCancel": fromOption onCancel,
            "className": fromOption className,
            "title": fromOption title,
            "cancelText": fromOption cancelText,
            "style": fromOption style,
            "id": fromOption id,
            "onConfirm": fromOption onConfirm,
            "okText": fromOption okText,
            "okType": fromOption okType
          }
        );
};

module LocaleProvider = {
  external localeProvider : ReasonReact.reactClass = "antd/lib/locale-provider" [@@bs.module];
  let make ::id=? ::className=? ::style=? ::locale=? =>
    ReasonReact.wrapJsForReason
      reactClass::localeProvider
      props::
        Js.Undefined.(
          {
            "id": fromOption id,
            "className": fromOption className,
            "style": fromOption style,
            "locale": fromOption locale
          }
        );
};

module Tree = {
  external tree : ReasonReact.reactClass = "antd/lib/tree" [@@bs.module];
  let make
      ::defaultCheckedKeys=?
      ::multiple=?
      ::defaultExpandAll=?
      ::selectedKeys=?
      ::filterTreeNode=?
      ::defaultExpandedKeys=?
      ::onCheck=?
      ::expandedKeys=?
      ::onSelect=?
      ::loadData=?
      ::showLine=?
      ::onDragEnter=?
      ::autoExpandParent=?
      ::onRightClick=?
      ::checkedKeys=?
      ::showIcon=?
      ::className=?
      ::style=?
      ::checkable=?
      ::onDragOver=?
      ::onDragLeave=?
      ::onExpand=?
      ::id=?
      ::checkStrictly=?
      ::onDragEnd=?
      ::draggable=?
      ::onDragStart=?
      ::onDrop=?
      ::defaultSelectedKeys=? =>
    ReasonReact.wrapJsForReason
      reactClass::tree
      props::
        Js.Undefined.(
          {
            "defaultCheckedKeys": fromOption defaultCheckedKeys,
            "multiple": unwrapBool multiple,
            "defaultExpandAll": unwrapBool defaultExpandAll,
            "selectedKeys": fromOption selectedKeys,
            "filterTreeNode": fromOption filterTreeNode,
            "defaultExpandedKeys": fromOption defaultExpandedKeys,
            "onCheck": fromOption onCheck,
            "expandedKeys": fromOption expandedKeys,
            "onSelect": fromOption onSelect,
            "loadData": fromOption loadData,
            "showLine": unwrapBool showLine,
            "onDragEnter": fromOption onDragEnter,
            "autoExpandParent": unwrapBool autoExpandParent,
            "onRightClick": fromOption onRightClick,
            "checkedKeys": fromOption checkedKeys,
            "showIcon": unwrapBool showIcon,
            "className": fromOption className,
            "style": fromOption style,
            "checkable": unwrapBool checkable,
            "onDragOver": fromOption onDragOver,
            "onDragLeave": fromOption onDragLeave,
            "onExpand": fromOption onExpand,
            "id": fromOption id,
            "checkStrictly": fromOption checkStrictly,
            "onDragEnd": fromOption onDragEnd,
            "draggable": unwrapBool draggable,
            "onDragStart": fromOption onDragStart,
            "onDrop": fromOption onDrop,
            "defaultSelectedKeys": fromOption defaultSelectedKeys
          }
        );
  module TreeNode = {
    external treeNode : ReasonReact.reactClass = "TreeNode" [@@bs.module "antd/lib/tree"];
    let make
        ::disabled=?
        ::disableCheckbox=?
        ::title=?
        ::key=?
        ::isLeaf=?
        ::id=?
        ::className=?
        ::style=? =>
      ReasonReact.wrapJsForReason
        reactClass::treeNode
        props::
          Js.Undefined.(
            {
              "disabled": unwrapBool disabled,
              "disableCheckbox": unwrapBool disableCheckbox,
              "title": fromOption title,
              "key": fromOption key,
              "isLeaf": unwrapBool isLeaf,
              "id": fromOption id,
              "className": fromOption className,
              "style": fromOption style
            }
          );
  };
};

module Table = {
  external table : ReasonReact.reactClass = "antd/lib/table" [@@bs.module];
  let make
      ::onRowMouseLeave=?
      ::defaultExpandedRowKeys=?
      ::onRowDoubleClick=?
      ::onExpandedRowsChange=?
      ::rowKey=?
      ::locale=?
      ::showHeader=?
      ::columns=?
      ::defaultExpandAllRows=?
      ::bordered=?
      ::indentSize=?
      ::footer=?
      ::expandedRowRender=?
      ::className=?
      ::size=?
      ::title=?
      ::style=?
      ::rowClassName=?
      ::expandedRowKeys=?
      ::scroll=?
      ::onExpand=?
      ::dataSource=?
      ::pagination=?
      ::id=?
      ::onRowMouseEnter=?
      ::rowSelection=?
      ::onRowClick=?
      ::onChange=?
      ::loading=? =>
    ReasonReact.wrapJsForReason
      reactClass::table
      props::
        Js.Undefined.(
          {
            "onRowMouseLeave": fromOption onRowMouseLeave,
            "defaultExpandedRowKeys": fromOption defaultExpandedRowKeys,
            "onRowDoubleClick": fromOption onRowDoubleClick,
            "onExpandedRowsChange": fromOption onExpandedRowsChange,
            "rowKey": fromOption rowKey,
            "locale": fromOption locale,
            "showHeader": unwrapBool showHeader,
            "columns": fromOption columns,
            "defaultExpandAllRows": unwrapBool defaultExpandAllRows,
            "bordered": unwrapBool bordered,
            "indentSize": fromOption indentSize,
            "footer": fromOption footer,
            "expandedRowRender": fromOption expandedRowRender,
            "className": fromOption className,
            "size": fromOption size,
            "title": fromOption title,
            "style": fromOption style,
            "rowClassName": fromOption rowClassName,
            "expandedRowKeys": fromOption expandedRowKeys,
            "scroll": fromOption scroll,
            "onExpand": fromOption onExpand,
            "dataSource": fromOption dataSource,
            "pagination": fromOption pagination,
            "id": fromOption id,
            "onRowMouseEnter": fromOption onRowMouseEnter,
            "rowSelection": fromOption rowSelection,
            "onRowClick": fromOption onRowClick,
            "onChange": fromOption onChange,
            "loading": unwrapBool loading
          }
        );
  module Column = {
    external column : ReasonReact.reactClass = "Column" [@@bs.module "antd/lib/table"];
    let make
        ::filterMultiple=?
        ::filtered=?
        ::filterDropdown=?
        ::filterIcon=?
        ::key=?
        ::filters=?
        ::width=?
        ::filterDropdownVisible=?
        ::className=?
        ::title=?
        ::style=?
        ::render=?
        ::colSpan=?
        ::sorter=?
        ::id=?
        ::sortOrder=?
        ::onFilter=?
        ::filteredValue=?
        ::onCellClick=?
        ::fixed=?
        ::dataIndex=?
        ::onFilterDropdownVisibleChange=? =>
      ReasonReact.wrapJsForReason
        reactClass::column
        props::
          Js.Undefined.(
            {
              "filterMultiple": unwrapBool filterMultiple,
              "filtered": unwrapBool filtered,
              "filterDropdown": fromOption filterDropdown,
              "filterIcon": fromOption filterIcon,
              "key": fromOption key,
              "filters": fromOption filters,
              "width": fromOption width,
              "filterDropdownVisible": unwrapBool filterDropdownVisible,
              "className": fromOption className,
              "title": fromOption title,
              "style": fromOption style,
              "render": fromOption render,
              "colSpan": fromOption colSpan,
              "sorter": fromOption sorter,
              "id": fromOption id,
              "sortOrder": fromOption sortOrder,
              "onFilter": fromOption onFilter,
              "filteredValue": fromOption filteredValue,
              "onCellClick": fromOption onCellClick,
              "fixed": fromOption fixed,
              "dataIndex": fromOption dataIndex,
              "onFilterDropdownVisibleChange": fromOption onFilterDropdownVisibleChange
            }
          );
  };
  module ColumnGroup = {
    external columnGroup : ReasonReact.reactClass = "ColumnGroup" [@@bs.module "antd/lib/table"];
    let make ::id=? ::className=? ::style=? ::title=? =>
      ReasonReact.wrapJsForReason
        reactClass::columnGroup
        props::
          Js.Undefined.(
            {
              "id": fromOption id,
              "className": fromOption className,
              "style": fromOption style,
              "title": fromOption title
            }
          );
  };
};

module Affix = {
  external affix : ReasonReact.reactClass = "antd/lib/affix" [@@bs.module];
  let make
      ::offsetTop=?
      ::offset=?
      ::offsetBottom=?
      ::target=?
      ::onChange=?
      ::id=?
      ::className=?
      ::style=? =>
    ReasonReact.wrapJsForReason
      reactClass::affix
      props::
        Js.Undefined.(
          {
            "offsetTop": fromOption offsetTop,
            "offset": fromOption offset,
            "offsetBottom": fromOption offsetBottom,
            "target": fromOption target,
            "onChange": fromOption onChange,
            "id": fromOption id,
            "className": fromOption className,
            "style": fromOption style
          }
        );
};

module Tabs = {
  external tabs : ReasonReact.reactClass = "antd/lib/tabs" [@@bs.module];
  let make
      ::onEdit=?
      ::tabBarExtraContent=?
      ::hideAdd=?
      ::tabPosition=?
      ::type_=?
      ::activeKey=?
      ::onNextClick=?
      ::onPrevClick=?
      ::className=?
      ::size=?
      ::style=?
      ::id=?
      ::tabBarStyle=?
      ::defaultActiveKey=?
      ::onChange=?
      ::onTabClick=?
      ::animated=? =>
    ReasonReact.wrapJsForReason
      reactClass::tabs
      props::
        Js.Undefined.(
          {
            "onEdit": fromOption onEdit,
            "tabBarExtraContent": fromOption tabBarExtraContent,
            "hideAdd": unwrapBool hideAdd,
            "tabPosition": fromOption tabPosition,
            "type": fromOption type_,
            "activeKey": fromOption activeKey,
            "onNextClick": fromOption onNextClick,
            "onPrevClick": fromOption onPrevClick,
            "className": fromOption className,
            "size": fromOption size,
            "style": fromOption style,
            "id": fromOption id,
            "tabBarStyle": fromOption tabBarStyle,
            "defaultActiveKey": fromOption defaultActiveKey,
            "onChange": fromOption onChange,
            "onTabClick": fromOption onTabClick,
            "animated": unwrapBool animated
          }
        );
  module TabPane = {
    external tabPane : ReasonReact.reactClass = "TabPane" [@@bs.module "antd/lib/tabs"];
    let make ::key=? ::tab=? ::forceRender=? ::id=? ::className=? ::style=? =>
      ReasonReact.wrapJsForReason
        reactClass::tabPane
        props::
          Js.Undefined.(
            {
              "key": fromOption key,
              "tab": fromOption tab,
              "forceRender": unwrapBool forceRender,
              "id": fromOption id,
              "className": fromOption className,
              "style": fromOption style
            }
          );
  };
};

module Radio = {
  external radio : ReasonReact.reactClass = "antd/lib/radio" [@@bs.module];
  let make ::checked=? ::defaultChecked=? ::value=? ::disabled=? ::id=? ::className=? ::style=? =>
    ReasonReact.wrapJsForReason
      reactClass::radio
      props::
        Js.Undefined.(
          {
            "checked": unwrapBool checked,
            "defaultChecked": unwrapBool defaultChecked,
            "value": fromOption value,
            "disabled": unwrapBool disabled,
            "id": fromOption id,
            "className": fromOption className,
            "style": fromOption style
          }
        );
  module Group = {
    external group : ReasonReact.reactClass = "Group" [@@bs.module "antd/lib/radio"];
    let make
        ::disabled=?
        ::name=?
        ::value=?
        ::className=?
        ::size=?
        ::style=?
        ::id=?
        ::options=?
        ::defaultValue=?
        ::onChange=? =>
      ReasonReact.wrapJsForReason
        reactClass::group
        props::
          Js.Undefined.(
            {
              "disabled": unwrapBool disabled,
              "name": fromOption name,
              "value": fromOption value,
              "className": fromOption className,
              "size": fromOption size,
              "style": fromOption style,
              "id": fromOption id,
              "options": fromOption options,
              "defaultValue": fromOption defaultValue,
              "onChange": fromOption onChange
            }
          );
  };
  module Button = {
    external button : ReasonReact.reactClass = "Button" [@@bs.module "antd/lib/radio"];
    let make
        ::defaultChecked=?
        ::disabled=?
        ::name=?
        ::value=?
        ::onMouseEnter=?
        ::className=?
        ::style=?
        ::checked=?
        ::id=?
        ::onMouseLeave=?
        ::onChange=? =>
      ReasonReact.wrapJsForReason
        reactClass::button
        props::
          Js.Undefined.(
            {
              "defaultChecked": unwrapBool defaultChecked,
              "disabled": unwrapBool disabled,
              "name": fromOption name,
              "value": fromOption value,
              "onMouseEnter": fromOption onMouseEnter,
              "className": fromOption className,
              "style": fromOption style,
              "checked": unwrapBool checked,
              "id": fromOption id,
              "onMouseLeave": fromOption onMouseLeave,
              "onChange": fromOption onChange
            }
          );
  };
};

module Button = {
  external button : ReasonReact.reactClass = "antd/lib/button" [@@bs.module];
  let make
      ::type_=?
      ::icon=?
      ::className=?
      ::size=?
      ::style=?
      ::htmlType=?
      ::loading=?
      ::id=?
      ::shape=?
      ::ghost=?
      ::onClick=? =>
    ReasonReact.wrapJsForReason
      reactClass::button
      props::
        Js.Undefined.(
          {
            "type": fromOption type_,
            "icon": fromOption icon,
            "className": fromOption className,
            "size": fromOption size,
            "style": fromOption style,
            "htmlType": fromOption htmlType,
            "loading": fromOption loading,
            "id": fromOption id,
            "shape": fromOption shape,
            "ghost": fromOption ghost,
            "onClick": fromOption onClick
          }
        );
};

module Layout = {
  external layout : ReasonReact.reactClass = "antd/lib/layout" [@@bs.module];
  let make ::id=? ::className=? ::style=? =>
    ReasonReact.wrapJsForReason
      reactClass::layout
      props::
        Js.Undefined.(
          {"id": fromOption id, "className": fromOption className, "style": fromOption style}
        );
  module Header = {
    external header : ReasonReact.reactClass = "Header" [@@bs.module "antd/lib/layout"];
    let make ::id=? ::className=? ::style=? =>
      ReasonReact.wrapJsForReason
        reactClass::header
        props::
          Js.Undefined.(
            {"id": fromOption id, "className": fromOption className, "style": fromOption style}
          );
  };
  module Footer = {
    external footer : ReasonReact.reactClass = "Footer" [@@bs.module "antd/lib/layout"];
    let make ::id=? ::className=? ::style=? =>
      ReasonReact.wrapJsForReason
        reactClass::footer
        props::
          Js.Undefined.(
            {"id": fromOption id, "className": fromOption className, "style": fromOption style}
          );
  };
  module Content = {
    external content : ReasonReact.reactClass = "Content" [@@bs.module "antd/lib/layout"];
    let make ::id=? ::className=? ::style=? =>
      ReasonReact.wrapJsForReason
        reactClass::content
        props::
          Js.Undefined.(
            {"id": fromOption id, "className": fromOption className, "style": fromOption style}
          );
  };
  module Sider = {
    external sider : ReasonReact.reactClass = "Sider" [@@bs.module "antd/lib/layout"];
    let make
        ::collapsedWidth=?
        ::collapsible=?
        ::breakpoint=?
        ::width=?
        ::className=?
        ::style=?
        ::id=?
        ::defaultCollapsed=?
        ::reverseArrow=?
        ::onCollapse=?
        ::trigger=?
        ::collapsed=? =>
      ReasonReact.wrapJsForReason
        reactClass::sider
        props::
          Js.Undefined.(
            {
              "collapsedWidth": fromOption collapsedWidth,
              "collapsible": unwrapBool collapsible,
              "breakpoint": fromOption breakpoint,
              "width": fromOption width,
              "className": fromOption className,
              "style": fromOption style,
              "id": fromOption id,
              "defaultCollapsed": unwrapBool defaultCollapsed,
              "reverseArrow": unwrapBool reverseArrow,
              "onCollapse": fromOption onCollapse,
              "trigger": fromOption trigger,
              "collapsed": unwrapBool collapsed
            }
          );
  };
};

module Notification = {
  type stringOrNode;
  type options;
  type key = string;
  external success : options => unit = "" [@@bs.module "antd/lib/notification"];
  external error : options => unit = "" [@@bs.module "antd/lib/notification"];
  external info : options => unit = "" [@@bs.module "antd/lib/notification"];
  external warning : options => unit = "" [@@bs.module "antd/lib/notification"];
  external warn : options => unit = "" [@@bs.module "antd/lib/notification"];
  external close : key => unit = "" [@@bs.module "antd/lib/notification"];
  external destroy : unit => unit = "" [@@bs.module "antd/lib/notification"];
  external config : options => unit = "" [@@bs.module "antd/lib/notification"];
};

module Checkbox = {
  external checkbox : ReasonReact.reactClass = "antd/lib/checkbox" [@@bs.module];
  let make
      ::defaultChecked=?
      ::disabled=?
      ::name=?
      ::value=?
      ::onMouseEnter=?
      ::className=?
      ::style=?
      ::checked=?
      ::id=?
      ::onMouseLeave=?
      ::onChange=? =>
    ReasonReact.wrapJsForReason
      reactClass::checkbox
      props::
        Js.Undefined.(
          {
            "defaultChecked": unwrapBool defaultChecked,
            "disabled": unwrapBool disabled,
            "name": fromOption name,
            "value": fromOption value,
            "onMouseEnter": fromOption onMouseEnter,
            "className": fromOption className,
            "style": fromOption style,
            "checked": unwrapBool checked,
            "id": fromOption id,
            "onMouseLeave": fromOption onMouseLeave,
            "onChange": fromOption onChange
          }
        );
  module Group = {
    external group : ReasonReact.reactClass = "Group" [@@bs.module "antd/lib/checkbox"];
    let make
        ::defaultValue=?
        ::value=?
        ::options=?
        ::onChange=?
        ::disabled=?
        ::id=?
        ::className=?
        ::style=? =>
      ReasonReact.wrapJsForReason
        reactClass::group
        props::
          Js.Undefined.(
            {
              "defaultValue": fromOption defaultValue,
              "value": fromOption value,
              "options": fromOption options,
              "onChange": fromOption onChange,
              "disabled": unwrapBool disabled,
              "id": fromOption id,
              "className": fromOption className,
              "style": fromOption style
            }
          );
  };
};

module Transfer = {
  external transfer : ReasonReact.reactClass = "antd/lib/transfer" [@@bs.module];
  let make
      ::searchPlaceholder=?
      ::titles=?
      ::onSelectChange=?
      ::showSearch=?
      ::onSearchChange=?
      ::footer=?
      ::className=?
      ::style=?
      ::notFoundContent=?
      ::render=?
      ::lazy_=?
      ::dataSource=?
      ::id=?
      ::operations=?
      ::onScroll=?
      ::listStyle=?
      ::onChange=?
      ::filterOption=?
      ::targetKeys=? =>
    ReasonReact.wrapJsForReason
      reactClass::transfer
      props::
        Js.Undefined.(
          {
            "searchPlaceholder": fromOption searchPlaceholder,
            "titles": fromOption titles,
            "onSelectChange": fromOption onSelectChange,
            "showSearch": unwrapBool showSearch,
            "onSearchChange": fromOption onSearchChange,
            "footer": fromOption footer,
            "className": fromOption className,
            "style": fromOption style,
            "notFoundContent": fromOption notFoundContent,
            "render": fromOption render,
            "lazy": fromOption lazy_,
            "dataSource": fromOption dataSource,
            "id": fromOption id,
            "operations": fromOption operations,
            "onScroll": fromOption onScroll,
            "listStyle": fromOption listStyle,
            "onChange": fromOption onChange,
            "filterOption": unwrapBool filterOption,
            "targetKeys": fromOption targetKeys
          }
        );
};

module Popover = {
  external popover : ReasonReact.reactClass = "antd/lib/popover" [@@bs.module];
  let make ::id=? ::className=? ::style=? ::title=? ::content=? =>
    ReasonReact.wrapJsForReason
      reactClass::popover
      props::
        Js.Undefined.(
          {
            "id": fromOption id,
            "className": fromOption className,
            "style": fromOption style,
            "title": fromOption title,
            "content": fromOption content
          }
        );
};

module AutoComplete = {
  external autoComplete : ReasonReact.reactClass = "antd/lib/auto-complete" [@@bs.module];
  let make
      ::children=?
      ::disabled=?
      ::onSelect=?
      ::allowClear=?
      ::placeholder=?
      ::value=?
      ::backfill=?
      ::className=?
      ::onSearch=?
      ::style=?
      ::dataSource=?
      ::id=?
      ::defaultActiveFirstOption=?
      ::defaultValue=?
      ::onChange=?
      ::filterOption=? =>
    ReasonReact.wrapJsForReason
      reactClass::autoComplete
      props::
        Js.Undefined.(
          {
            "children": fromOption children,
            "disabled": unwrapBool disabled,
            "onSelect": fromOption onSelect,
            "allowClear": unwrapBool allowClear,
            "placeholder": fromOption placeholder,
            "value": fromOption value,
            "backfill": unwrapBool backfill,
            "className": fromOption className,
            "onSearch": fromOption onSearch,
            "style": fromOption style,
            "dataSource": fromOption dataSource,
            "id": fromOption id,
            "defaultActiveFirstOption": unwrapBool defaultActiveFirstOption,
            "defaultValue": fromOption defaultValue,
            "onChange": fromOption onChange,
            "filterOption": unwrapBool filterOption
          }
        );
};

module Steps = {
  external steps : ReasonReact.reactClass = "antd/lib/steps" [@@bs.module];
  let make
      ::progressDot=?
      ::className=?
      ::size=?
      ::style=?
      ::status=?
      ::id=?
      ::current=?
      ::iconPrefix=?
      ::direction=? =>
    ReasonReact.wrapJsForReason
      reactClass::steps
      props::
        Js.Undefined.(
          {
            "progressDot": fromOption progressDot,
            "className": fromOption className,
            "size": fromOption size,
            "style": fromOption style,
            "status": fromOption status,
            "id": fromOption id,
            "current": fromOption current,
            "iconPrefix": fromOption iconPrefix,
            "direction": fromOption direction
          }
        );
  module Step = {
    external step : ReasonReact.reactClass = "Step" [@@bs.module "antd/lib/steps"];
    let make ::status=? ::title=? ::description=? ::icon=? ::id=? ::className=? ::style=? =>
      ReasonReact.wrapJsForReason
        reactClass::step
        props::
          Js.Undefined.(
            {
              "status": fromOption status,
              "title": fromOption title,
              "description": fromOption description,
              "icon": fromOption icon,
              "id": fromOption id,
              "className": fromOption className,
              "style": fromOption style
            }
          );
  };
};

module Alert = {
  external alert : ReasonReact.reactClass = "antd/lib/alert" [@@bs.module];
  let make
      ::description=?
      ::closable=?
      ::banner=?
      ::onClose=?
      ::type_=?
      ::showIcon=?
      ::className=?
      ::style=?
      ::id=?
      ::closeText=?
      ::message=? =>
    ReasonReact.wrapJsForReason
      reactClass::alert
      props::
        Js.Undefined.(
          {
            "description": fromOption description,
            "closable": unwrapBool closable,
            "banner": unwrapBool banner,
            "onClose": fromOption onClose,
            "type": fromOption type_,
            "showIcon": unwrapBool showIcon,
            "className": fromOption className,
            "style": fromOption style,
            "id": fromOption id,
            "closeText": fromOption closeText,
            "message": fromOption message
          }
        );
};

module TimePicker = {
  external timePicker : ReasonReact.reactClass = "antd/lib/time-picker" [@@bs.module];
  let make
      ::onOpenChange=?
      ::format=?
      ::getPopupContainer=?
      ::disabled=?
      ::disabledSeconds=?
      ::placeholder=?
      ::use12Hours=?
      ::popupClassName=?
      ::value=?
      ::disabledMinutes=?
      ::hideDisabledOptions=?
      ::className=?
      ::style=?
      ::disabledHours=?
      ::id=?
      ::defaultOpenValue=?
      ::defaultValue=?
      ::onChange=?
      ::addon=?
      ::open_=? =>
    ReasonReact.wrapJsForReason
      reactClass::timePicker
      props::
        Js.Undefined.(
          {
            "onOpenChange": fromOption onOpenChange,
            "format": fromOption format,
            "getPopupContainer": fromOption getPopupContainer,
            "disabled": unwrapBool disabled,
            "disabledSeconds": fromOption disabledSeconds,
            "placeholder": fromOption placeholder,
            "use12Hours": unwrapBool use12Hours,
            "popupClassName": fromOption popupClassName,
            "value": fromOption value,
            "disabledMinutes": fromOption disabledMinutes,
            "hideDisabledOptions": unwrapBool hideDisabledOptions,
            "className": fromOption className,
            "style": fromOption style,
            "disabledHours": fromOption disabledHours,
            "id": fromOption id,
            "defaultOpenValue": fromOption defaultOpenValue,
            "defaultValue": fromOption defaultValue,
            "onChange": fromOption onChange,
            "addon": fromOption addon,
            "open": unwrapBool open_
          }
        );
};

module Icon = {
  external icon : ReasonReact.reactClass = "antd/lib/icon" [@@bs.module];
  let make ::type_=? ::spin=? ::onClick=? ::id=? ::className=? ::style=? =>
    ReasonReact.wrapJsForReason
      reactClass::icon
      props::
        Js.Undefined.(
          {
            "type": fromOption type_,
            "spin": fromOption spin,
            "onClick": fromOption onClick,
            "id": fromOption id,
            "className": fromOption className,
            "style": fromOption style
          }
        );
};

module Dropdown = {
  external dropdown : ReasonReact.reactClass = "antd/lib/dropdown" [@@bs.module];
  let make
      ::align=?
      ::disabled=?
      ::type_=?
      ::className=?
      ::size=?
      ::style=?
      ::overlay=?
      ::onVisibleChange=?
      ::id=?
      ::visible=?
      ::placement=?
      ::trigger=?
      ::onClick=? =>
    ReasonReact.wrapJsForReason
      reactClass::dropdown
      props::
        Js.Undefined.(
          {
            "align": fromOption align,
            "disabled": unwrapBool disabled,
            "type": fromOption type_,
            "className": fromOption className,
            "size": fromOption size,
            "style": fromOption style,
            "overlay": fromOption overlay,
            "onVisibleChange": fromOption onVisibleChange,
            "id": fromOption id,
            "visible": unwrapBool visible,
            "placement": fromOption placement,
            "trigger": fromOption trigger,
            "onClick": fromOption onClick
          }
        );
};

module Rate = {
  external rate : ReasonReact.reactClass = "antd/lib/rate" [@@bs.module];
  let make
      ::disabled=?
      ::allowHalf=?
      ::value=?
      ::onHoverChange=?
      ::className=?
      ::style=?
      ::id=?
      ::count=?
      ::defaultValue=?
      ::onChange=?
      ::character=? =>
    ReasonReact.wrapJsForReason
      reactClass::rate
      props::
        Js.Undefined.(
          {
            "disabled": unwrapBool disabled,
            "allowHalf": unwrapBool allowHalf,
            "value": fromOption value,
            "onHoverChange": fromOption onHoverChange,
            "className": fromOption className,
            "style": fromOption style,
            "id": fromOption id,
            "count": fromOption count,
            "defaultValue": fromOption defaultValue,
            "onChange": fromOption onChange,
            "character": fromOption character
          }
        );
};

module Modal = {
  external modal : ReasonReact.reactClass = "antd/lib/modal" [@@bs.module];
  let make
      ::closable=?
      ::getContainer=?
      ::visible=?
      ::okText=?
      ::okType=?
      ::maskClosable=?
      ::wrapClassName=?
      ::className=?
      ::style=?
      ::onCancel=?
      ::onOk=?
      ::width=?
      ::id=?
      ::footer=?
      ::title=?
      ::cancelText=?
      ::confirmLoading=?
      ::afterClose=?
      ::zIndex=? =>
    ReasonReact.wrapJsForReason
      reactClass::modal
      props::
        Js.Undefined.(
          {
            "closable": unwrapBool closable,
            "getContainer": fromOption getContainer,
            "visible": unwrapBool visible,
            "okText": fromOption okText,
            "okType": fromOption okType,
            "maskClosable": unwrapBool maskClosable,
            "wrapClassName": fromOption wrapClassName,
            "className": fromOption className,
            "style": fromOption style,
            "onCancel": fromOption onCancel,
            "onOk": fromOption onOk,
            "width": fromOption width,
            "id": fromOption id,
            "footer": fromOption footer,
            "title": fromOption title,
            "cancelText": fromOption cancelText,
            "confirmLoading": unwrapBool confirmLoading,
            "afterClose": fromOption afterClose,
            "zIndex": fromOption zIndex
          }
        );
  type options;
  type ref;
  external info : options => ref = "" [@@bs.module "antd/lib/modal"];
  external success : options => ref = "" [@@bs.module "antd/lib/modal"];
  external error : options => ref = "" [@@bs.module "antd/lib/modal"];
  external warning : options => ref = "" [@@bs.module "antd/lib/modal"];
  external confirm : options => ref = "" [@@bs.module "antd/lib/modal"];
};

module Carousel = {
  external carousel : ReasonReact.reactClass = "antd/lib/carousel" [@@bs.module];
  let make
      ::vertical=?
      ::autoplay=?
      ::afterChange=?
      ::easing=?
      ::className=?
      ::style=?
      ::id=?
      ::effect=?
      ::beforeChange=?
      ::dots=? =>
    ReasonReact.wrapJsForReason
      reactClass::carousel
      props::
        Js.Undefined.(
          {
            "vertical": unwrapBool vertical,
            "autoplay": unwrapBool autoplay,
            "afterChange": fromOption afterChange,
            "easing": fromOption easing,
            "className": fromOption className,
            "style": fromOption style,
            "id": fromOption id,
            "effect": fromOption effect,
            "beforeChange": fromOption beforeChange,
            "dots": unwrapBool dots
          }
        );
};

module Card = {
  external card : ReasonReact.reactClass = "antd/lib/card" [@@bs.module];
  let make
      ::bodyStyle=?
      ::extra=?
      ::bordered=?
      ::className=?
      ::title=?
      ::style=?
      ::id=?
      ::noHovering=?
      ::loading=? =>
    ReasonReact.wrapJsForReason
      reactClass::card
      props::
        Js.Undefined.(
          {
            "bodyStyle": fromOption bodyStyle,
            "extra": fromOption extra,
            "bordered": unwrapBool bordered,
            "className": fromOption className,
            "title": fromOption title,
            "style": fromOption style,
            "id": fromOption id,
            "noHovering": unwrapBool noHovering,
            "loading": unwrapBool loading
          }
        );
  module Grid = {
    external grid : ReasonReact.reactClass = "Grid" [@@bs.module "antd/lib/card"];
    let make ::id=? ::className=? ::style=? =>
      ReasonReact.wrapJsForReason
        reactClass::grid
        props::
          Js.Undefined.(
            {"id": fromOption id, "className": fromOption className, "style": fromOption style}
          );
  };
};

module Calendar = {
  external calendar : ReasonReact.reactClass = "antd/lib/calendar" [@@bs.module];
  let make
      ::monthFullCellRender=?
      ::fullscreen=?
      ::onSelect=?
      ::locale=?
      ::value=?
      ::monthCellRender=?
      ::mode=?
      ::className=?
      ::style=?
      ::id=?
      ::disabledDate=?
      ::dateFullCellRender=?
      ::defaultValue=?
      ::dateCellRender=?
      ::onPanelChange=? =>
    ReasonReact.wrapJsForReason
      reactClass::calendar
      props::
        Js.Undefined.(
          {
            "monthFullCellRender": fromOption monthFullCellRender,
            "fullscreen": unwrapBool fullscreen,
            "onSelect": fromOption onSelect,
            "locale": fromOption locale,
            "value": fromOption value,
            "monthCellRender": fromOption monthCellRender,
            "mode": fromOption mode,
            "className": fromOption className,
            "style": fromOption style,
            "id": fromOption id,
            "disabledDate": fromOption disabledDate,
            "dateFullCellRender": fromOption dateFullCellRender,
            "defaultValue": fromOption defaultValue,
            "dateCellRender": fromOption dateCellRender,
            "onPanelChange": fromOption onPanelChange
          }
        );
};

module Switch_ = {
  external switch_ : ReasonReact.reactClass = "antd/lib/switch" [@@bs.module];
  let make
      ::defaultChecked=?
      ::disabled=?
      ::checkedChildren=?
      ::className=?
      ::size=?
      ::style=?
      ::checked=?
      ::id=?
      ::unCheckedChildren=?
      ::onChange=? =>
    ReasonReact.wrapJsForReason
      reactClass::switch_
      props::
        Js.Undefined.(
          {
            "defaultChecked": unwrapBool defaultChecked,
            "disabled": unwrapBool disabled,
            "checkedChildren": fromOption checkedChildren,
            "className": fromOption className,
            "size": fromOption size,
            "style": fromOption style,
            "checked": unwrapBool checked,
            "id": fromOption id,
            "unCheckedChildren": fromOption unCheckedChildren,
            "onChange": fromOption onChange
          }
        );
};

module DatePicker = {
  external datePicker : ReasonReact.reactClass = "antd/lib/date-picker" [@@bs.module];
  let make
      ::onOpenChange=?
      ::format=?
      ::disabled=?
      ::allowClear=?
      ::placeholder=?
      ::disabledTime=?
      ::locale=?
      ::getCalendarContainer=?
      ::value=?
      ::popupStyle=?
      ::onOk=?
      ::showToday=?
      ::className=?
      ::size=?
      ::showTime=?
      ::style=?
      ::showTimeDefaultValue=?
      ::id=?
      ::disabledDate=?
      ::renderExtraFooter=?
      ::defaultValue=?
      ::onChange=?
      ::open_=? =>
    ReasonReact.wrapJsForReason
      reactClass::datePicker
      props::
        Js.Undefined.(
          {
            "onOpenChange": fromOption onOpenChange,
            "format": fromOption format,
            "disabled": unwrapBool disabled,
            "allowClear": unwrapBool allowClear,
            "placeholder": fromOption placeholder,
            "disabledTime": fromOption disabledTime,
            "locale": fromOption locale,
            "getCalendarContainer": fromOption getCalendarContainer,
            "value": fromOption value,
            "popupStyle": fromOption popupStyle,
            "onOk": fromOption onOk,
            "showToday": unwrapBool showToday,
            "className": fromOption className,
            "size": fromOption size,
            "showTime": fromOption showTime,
            "style": fromOption style,
            "showTime.defaultValue": fromOption showTimeDefaultValue,
            "id": fromOption id,
            "disabledDate": fromOption disabledDate,
            "renderExtraFooter": fromOption renderExtraFooter,
            "defaultValue": fromOption defaultValue,
            "onChange": fromOption onChange,
            "open": unwrapBool open_
          }
        );
};

module Mention = {
  external mention : ReasonReact.reactClass = "antd/lib/mention" [@@bs.module];
  let make
      ::suggestionStyle=?
      ::getSuggestionContainer=?
      ::disabled=?
      ::onSelect=?
      ::placeholder=?
      ::value=?
      ::onSearchChange=?
      ::onBlur=?
      ::className=?
      ::prefix=?
      ::style=?
      ::notFoundContent=?
      ::multiLines=?
      ::readOnly=?
      ::id=?
      ::suggestions=?
      ::defaultValue=?
      ::onChange=?
      ::loading=?
      ::onFocus=? =>
    ReasonReact.wrapJsForReason
      reactClass::mention
      props::
        Js.Undefined.(
          {
            "suggestionStyle": fromOption suggestionStyle,
            "getSuggestionContainer": fromOption getSuggestionContainer,
            "disabled": unwrapBool disabled,
            "onSelect": fromOption onSelect,
            "placeholder": fromOption placeholder,
            "value": fromOption value,
            "onSearchChange": fromOption onSearchChange,
            "onBlur": fromOption onBlur,
            "className": fromOption className,
            "prefix": fromOption prefix,
            "style": fromOption style,
            "notFoundContent": fromOption notFoundContent,
            "multiLines": unwrapBool multiLines,
            "readOnly": fromOption readOnly,
            "id": fromOption id,
            "suggestions": fromOption suggestions,
            "defaultValue": fromOption defaultValue,
            "onChange": fromOption onChange,
            "loading": unwrapBool loading,
            "onFocus": fromOption onFocus
          }
        );
  type t;
  external toString : t => string = "" [@@bs.module "antd/lib/mention"];
  external toContentState : string => t = "" [@@bs.module "antd/lib/mention"];
  external toEditorState : string => t = "" [@@bs.module "antd/lib/mention"];
  external getMentions : t => Js.Array.t string = "" [@@bs.module "antd/lib/mention"];
  module Nav = {
    external nav : ReasonReact.reactClass = "Nav" [@@bs.module "antd/lib/mention"];
    let make ::value=? ::data=? ::disabled=? ::id=? ::className=? ::style=? =>
      ReasonReact.wrapJsForReason
        reactClass::nav
        props::
          Js.Undefined.(
            {
              "value": fromOption value,
              "data": fromOption data,
              "disabled": unwrapBool disabled,
              "id": fromOption id,
              "className": fromOption className,
              "style": fromOption style
            }
          );
  };
};

module Pagination = {
  external pagination : ReasonReact.reactClass = "antd/lib/pagination" [@@bs.module];
  let make
      ::simple=?
      ::showSizeChanger=?
      ::defaultPageSize=?
      ::itemRender=?
      ::showTotal=?
      ::className=?
      ::size=?
      ::style=?
      ::showQuickJumper=?
      ::total=?
      ::pageSize=?
      ::id=?
      ::current=?
      ::pageSizeOptions=?
      ::onShowSizeChange=?
      ::onChange=?
      ::defaultCurrent=? =>
    ReasonReact.wrapJsForReason
      reactClass::pagination
      props::
        Js.Undefined.(
          {
            "simple": unwrapBool simple,
            "showSizeChanger": unwrapBool showSizeChanger,
            "defaultPageSize": fromOption defaultPageSize,
            "itemRender": fromOption itemRender,
            "showTotal": fromOption showTotal,
            "className": fromOption className,
            "size": fromOption size,
            "style": fromOption style,
            "showQuickJumper": unwrapBool showQuickJumper,
            "total": fromOption total,
            "pageSize": fromOption pageSize,
            "id": fromOption id,
            "current": fromOption current,
            "pageSizeOptions": fromOption pageSizeOptions,
            "onShowSizeChange": fromOption onShowSizeChange,
            "onChange": fromOption onChange,
            "defaultCurrent": fromOption defaultCurrent
          }
        );
};

module Cascader = {
  external cascader : ReasonReact.reactClass = "antd/lib/cascader" [@@bs.module];
  let make
      ::getPopupContainer=?
      ::disabled=?
      ::allowClear=?
      ::loadData=?
      ::placeholder=?
      ::showSearch=?
      ::popupClassName=?
      ::value=?
      ::onPopupVisibleChange=?
      ::displayRender=?
      ::className=?
      ::size=?
      ::style=?
      ::notFoundContent=?
      ::changeOnSelect=?
      ::id=?
      ::expandTrigger=?
      ::popupPlacement=?
      ::options=?
      ::defaultValue=?
      ::onChange=? =>
    ReasonReact.wrapJsForReason
      reactClass::cascader
      props::
        Js.Undefined.(
          {
            "getPopupContainer": fromOption getPopupContainer,
            "disabled": unwrapBool disabled,
            "allowClear": unwrapBool allowClear,
            "loadData": fromOption loadData,
            "placeholder": fromOption placeholder,
            "showSearch": unwrapBool showSearch,
            "popupClassName": fromOption popupClassName,
            "value": fromOption value,
            "onPopupVisibleChange": fromOption onPopupVisibleChange,
            "displayRender": fromOption displayRender,
            "className": fromOption className,
            "size": fromOption size,
            "style": fromOption style,
            "notFoundContent": fromOption notFoundContent,
            "changeOnSelect": unwrapBool changeOnSelect,
            "id": fromOption id,
            "expandTrigger": fromOption expandTrigger,
            "popupPlacement": fromOption popupPlacement,
            "options": fromOption options,
            "defaultValue": fromOption defaultValue,
            "onChange": fromOption onChange
          }
        );
};

module Col = {
  external col : ReasonReact.reactClass = "antd/lib/col" [@@bs.module];
  let make
      ::push=?
      ::lg=?
      ::offset=?
      ::sm=?
      ::xs=?
      ::className=?
      ::style=?
      ::id=?
      ::order=?
      ::xl=?
      ::pull=?
      ::md=?
      ::span=? =>
    ReasonReact.wrapJsForReason
      reactClass::col
      props::
        Js.Undefined.(
          {
            "push": fromOption push,
            "lg": fromOption lg,
            "offset": fromOption offset,
            "sm": fromOption sm,
            "xs": fromOption xs,
            "className": fromOption className,
            "style": fromOption style,
            "id": fromOption id,
            "order": fromOption order,
            "xl": fromOption xl,
            "pull": fromOption pull,
            "md": fromOption md,
            "span": fromOption span
          }
        );
};

module Spin = {
  external spin : ReasonReact.reactClass = "antd/lib/spin" [@@bs.module];
  let make
      ::size=?
      ::spinning=?
      ::tip=?
      ::delay=?
      ::wrapperClassName=?
      ::id=?
      ::className=?
      ::style=? =>
    ReasonReact.wrapJsForReason
      reactClass::spin
      props::
        Js.Undefined.(
          {
            "size": fromOption size,
            "spinning": unwrapBool spinning,
            "tip": fromOption tip,
            "delay": fromOption delay,
            "wrapperClassName": fromOption wrapperClassName,
            "id": fromOption id,
            "className": fromOption className,
            "style": fromOption style
          }
        );
};

module Avatar = {
  external avatar : ReasonReact.reactClass = "antd/lib/avatar" [@@bs.module];
  let make ::props=? ::size=? ::src=? ::icon=? ::id=? ::className=? ::style=? =>
    ReasonReact.wrapJsForReason
      reactClass::avatar
      props::
        Js.Undefined.(
          {
            "props": fromOption props,
            "size": fromOption size,
            "src": fromOption src,
            "icon": fromOption icon,
            "id": fromOption id,
            "className": fromOption className,
            "style": fromOption style
          }
        );
};

module TreeSelect = {
  external treeSelect : ReasonReact.reactClass = "antd/lib/tree-select" [@@bs.module];
  let make
      ::multiple=?
      ::treeCheckStrictly=?
      ::treeData=?
      ::treeNodeLabelProp=?
      ::searchPlaceholder=?
      ::getPopupContainer=?
      ::disabled=?
      ::treeDataSimpleMode=?
      ::onSelect=?
      ::allowClear=?
      ::loadData=?
      ::placeholder=?
      ::treeCheckable=?
      ::showSearch=?
      ::value=?
      ::dropdownStyle=?
      ::filterTreeNode=?
      ::labelInValue=?
      ::className=?
      ::size=?
      ::onSearch=?
      ::style=?
      ::treeDefaultExpandAll=?
      ::dropdownMatchSelectWidth=?
      ::id=?
      ::treeNodeFilterProp=?
      ::treeDefaultExpandedKeys=?
      ::defaultValue=?
      ::onChange=?
      ::showCheckedStrategy=? =>
    ReasonReact.wrapJsForReason
      reactClass::treeSelect
      props::
        Js.Undefined.(
          {
            "multiple": unwrapBool multiple,
            "treeCheckStrictly": unwrapBool treeCheckStrictly,
            "treeData": fromOption treeData,
            "treeNodeLabelProp": fromOption treeNodeLabelProp,
            "searchPlaceholder": fromOption searchPlaceholder,
            "getPopupContainer": fromOption getPopupContainer,
            "disabled": unwrapBool disabled,
            "treeDataSimpleMode": fromOption treeDataSimpleMode,
            "onSelect": fromOption onSelect,
            "allowClear": unwrapBool allowClear,
            "loadData": fromOption loadData,
            "placeholder": fromOption placeholder,
            "treeCheckable": unwrapBool treeCheckable,
            "showSearch": unwrapBool showSearch,
            "value": fromOption value,
            "dropdownStyle": fromOption dropdownStyle,
            "filterTreeNode": unwrapBool filterTreeNode,
            "labelInValue": fromOption labelInValue,
            "className": fromOption className,
            "size": fromOption size,
            "onSearch": fromOption onSearch,
            "style": fromOption style,
            "treeDefaultExpandAll": unwrapBool treeDefaultExpandAll,
            "dropdownMatchSelectWidth": unwrapBool dropdownMatchSelectWidth,
            "id": fromOption id,
            "treeNodeFilterProp": fromOption treeNodeFilterProp,
            "treeDefaultExpandedKeys": fromOption treeDefaultExpandedKeys,
            "defaultValue": fromOption defaultValue,
            "onChange": fromOption onChange,
            "showCheckedStrategy": fromOption showCheckedStrategy
          }
        );
  module TreeNode = {
    external treeNode : ReasonReact.reactClass = "TreeNode" [@@bs.module "antd/lib/tree-select"];
    let make
        ::disabled=?
        ::disableCheckbox=?
        ::isLeaf=?
        ::key=?
        ::value=?
        ::className=?
        ::title=?
        ::style=?
        ::id=? =>
      ReasonReact.wrapJsForReason
        reactClass::treeNode
        props::
          Js.Undefined.(
            {
              "disabled": unwrapBool disabled,
              "disableCheckbox": unwrapBool disableCheckbox,
              "isLeaf": unwrapBool isLeaf,
              "key": fromOption key,
              "value": fromOption value,
              "className": fromOption className,
              "title": fromOption title,
              "style": fromOption style,
              "id": fromOption id
            }
          );
  };
};

module BackTop = {
  external backTop : ReasonReact.reactClass = "antd/lib/back-top" [@@bs.module];
  let make ::visibilityHeight=? ::onClick=? ::target=? ::id=? ::className=? ::style=? =>
    ReasonReact.wrapJsForReason
      reactClass::backTop
      props::
        Js.Undefined.(
          {
            "visibilityHeight": fromOption visibilityHeight,
            "onClick": fromOption onClick,
            "target": fromOption target,
            "id": fromOption id,
            "className": fromOption className,
            "style": fromOption style
          }
        );
};

module Breadcrumb = {
  external breadcrumb : ReasonReact.reactClass = "antd/lib/breadcrumb" [@@bs.module];
  let make ::routes=? ::params=? ::separator=? ::itemRender=? ::id=? ::className=? ::style=? =>
    ReasonReact.wrapJsForReason
      reactClass::breadcrumb
      props::
        Js.Undefined.(
          {
            "routes": fromOption routes,
            "params": fromOption params,
            "separator": fromOption separator,
            "itemRender": fromOption itemRender,
            "id": fromOption id,
            "className": fromOption className,
            "style": fromOption style
          }
        );
  module Item = {
    external item : ReasonReact.reactClass = "Item" [@@bs.module "antd/lib/breadcrumb"];
    let make ::id=? ::className=? ::style=? ::separator=? ::href=? =>
      ReasonReact.wrapJsForReason
        reactClass::item
        props::
          Js.Undefined.(
            {
              "id": fromOption id,
              "className": fromOption className,
              "style": fromOption style,
              "separator": fromOption separator,
              "href": fromOption href
            }
          );
  };
};

module Collapse = {
  external collapse : ReasonReact.reactClass = "antd/lib/collapse" [@@bs.module];
  let make ::activeKey=? ::defaultActiveKey=? ::onChange=? ::id=? ::className=? ::style=? =>
    ReasonReact.wrapJsForReason
      reactClass::collapse
      props::
        Js.Undefined.(
          {
            "activeKey": fromOption activeKey,
            "defaultActiveKey": fromOption defaultActiveKey,
            "onChange": fromOption onChange,
            "id": fromOption id,
            "className": fromOption className,
            "style": fromOption style
          }
        );
  module Panel = {
    external panel : ReasonReact.reactClass = "Panel" [@@bs.module "antd/lib/collapse"];
    let make ::key=? ::header=? ::disabled=? ::id=? ::className=? ::style=? =>
      ReasonReact.wrapJsForReason
        reactClass::panel
        props::
          Js.Undefined.(
            {
              "key": fromOption key,
              "header": fromOption header,
              "disabled": unwrapBool disabled,
              "id": fromOption id,
              "className": fromOption className,
              "style": fromOption style
            }
          );
  };
};

module Form = {
  external form : ReasonReact.reactClass = "antd/lib/form" [@@bs.module];
  let make ::layout=? ::onSubmit=? ::hideRequiredMark=? ::id=? ::className=? ::style=? =>
    ReasonReact.wrapJsForReason
      reactClass::form
      props::
        Js.Undefined.(
          {
            "layout": fromOption layout,
            "onSubmit": fromOption onSubmit,
            "hideRequiredMark": unwrapBool hideRequiredMark,
            "id": fromOption id,
            "className": fromOption className,
            "style": fromOption style
          }
        );
  type wrapper = (ReasonReact.reactClass => ReasonReact.reactClass) [@bs];
  external create : unit => wrapper = "create" [@@bs.module "antd/lib/form"];
  let wrapper ::component ::make' ::props ::children => {
    let wrapper = create ();
    let reactClass' = ReasonReact.wrapReasonForJs ::component (fun _ => make' [||]);
    let reactClass = wrapper reactClass' [@bs];
    ReasonReact.wrapJsForReason ::reactClass ::props children
  };
  module Item = {
    external item : ReasonReact.reactClass = "Item" [@@bs.module "antd/lib/form"];
    let make
        ::colon=?
        ::validateStatus=?
        ::extra=?
        ::className=?
        ::required=?
        ::style=?
        ::label=?
        ::id=?
        ::wrapperCol=?
        ::help=?
        ::hasFeedback=?
        ::labelCol=? =>
      ReasonReact.wrapJsForReason
        reactClass::item
        props::
          Js.Undefined.(
            {
              "colon": unwrapBool colon,
              "validateStatus": fromOption validateStatus,
              "extra": fromOption extra,
              "className": fromOption className,
              "required": unwrapBool required,
              "style": fromOption style,
              "label": fromOption label,
              "id": fromOption id,
              "wrapperCol": fromOption wrapperCol,
              "help": fromOption help,
              "hasFeedback": unwrapBool hasFeedback,
              "labelCol": fromOption labelCol
            }
          );
  };
};

module Tag = {
  external tag : ReasonReact.reactClass = "antd/lib/tag" [@@bs.module];
  let make ::color=? ::closable=? ::onClose=? ::afterClose=? ::id=? ::className=? ::style=? =>
    ReasonReact.wrapJsForReason
      reactClass::tag
      props::
        Js.Undefined.(
          {
            "color": fromOption color,
            "closable": unwrapBool closable,
            "onClose": fromOption onClose,
            "afterClose": fromOption afterClose,
            "id": fromOption id,
            "className": fromOption className,
            "style": fromOption style
          }
        );
  module CheckableTag = {
    external checkableTag : ReasonReact.reactClass = "CheckableTag" [@@bs.module "antd/lib/tag"];
    let make ::id=? ::className=? ::style=? ::checked=? ::onChange=? =>
      ReasonReact.wrapJsForReason
        reactClass::checkableTag
        props::
          Js.Undefined.(
            {
              "id": fromOption id,
              "className": fromOption className,
              "style": fromOption style,
              "checked": unwrapBool checked,
              "onChange": fromOption onChange
            }
          );
  };
};

module Anchor = {
  external anchor : ReasonReact.reactClass = "antd/lib/anchor" [@@bs.module];
  let make
      ::offsetTop=?
      ::offsetBottom=?
      ::bounds=?
      ::affix=?
      ::showInkInFixed=?
      ::id=?
      ::className=?
      ::style=? =>
    ReasonReact.wrapJsForReason
      reactClass::anchor
      props::
        Js.Undefined.(
          {
            "offsetTop": fromOption offsetTop,
            "offsetBottom": fromOption offsetBottom,
            "bounds": fromOption bounds,
            "affix": unwrapBool affix,
            "showInkInFixed": unwrapBool showInkInFixed,
            "id": fromOption id,
            "className": fromOption className,
            "style": fromOption style
          }
        );
  module Link = {
    external link : ReasonReact.reactClass = "Link" [@@bs.module "antd/lib/anchor"];
    let make ::id=? ::className=? ::style=? ::href=? ::title=? =>
      ReasonReact.wrapJsForReason
        reactClass::link
        props::
          Js.Undefined.(
            {
              "id": fromOption id,
              "className": fromOption className,
              "style": fromOption style,
              "href": fromOption href,
              "title": fromOption title
            }
          );
  };
};

module Input = {
  external input : ReasonReact.reactClass = "antd/lib/input" [@@bs.module];
  let make
      ::suffix=?
      ::disabled=?
      ::addonAfter=?
      ::placeholder=?
      ::value=?
      ::type_=?
      ::addonBefore=?
      ::className=?
      ::size=?
      ::prefix=?
      ::style=?
      ::onPressEnter=?
      ::id=?
      ::defaultValue=?
      ::onChange=? =>
    ReasonReact.wrapJsForReason
      reactClass::input
      props::
        Js.Undefined.(
          {
            "suffix": fromOption suffix,
            "disabled": unwrapBool disabled,
            "addonAfter": fromOption addonAfter,
            "placeholder": fromOption placeholder,
            "value": fromOption value,
            "type": fromOption type_,
            "addonBefore": fromOption addonBefore,
            "className": fromOption className,
            "size": fromOption size,
            "prefix": fromOption prefix,
            "style": fromOption style,
            "onPressEnter": fromOption onPressEnter,
            "id": fromOption id,
            "defaultValue": fromOption defaultValue,
            "onChange": fromOption onChange
          }
        );
  module TextArea = {
    external textArea : ReasonReact.reactClass = "TextArea" [@@bs.module "antd/lib/input"];
    let make
        ::defaultValue=?
        ::value=?
        ::onPressEnter=?
        ::autosize=?
        ::id=?
        ::className=?
        ::style=? =>
      ReasonReact.wrapJsForReason
        reactClass::textArea
        props::
          Js.Undefined.(
            {
              "defaultValue": fromOption defaultValue,
              "value": fromOption value,
              "onPressEnter": fromOption onPressEnter,
              "autosize": unwrapBool autosize,
              "id": fromOption id,
              "className": fromOption className,
              "style": fromOption style
            }
          );
  };
  module Search = {
    external search : ReasonReact.reactClass = "Search" [@@bs.module "antd/lib/input"];
    let make ::id=? ::className=? ::style=? ::onSearch=? =>
      ReasonReact.wrapJsForReason
        reactClass::search
        props::
          Js.Undefined.(
            {
              "id": fromOption id,
              "className": fromOption className,
              "style": fromOption style,
              "onSearch": fromOption onSearch
            }
          );
  };
  module Group = {
    external group : ReasonReact.reactClass = "Group" [@@bs.module "antd/lib/input"];
    let make ::id=? ::className=? ::style=? ::size=? ::compact=? =>
      ReasonReact.wrapJsForReason
        reactClass::group
        props::
          Js.Undefined.(
            {
              "id": fromOption id,
              "className": fromOption className,
              "style": fromOption style,
              "size": fromOption size,
              "compact": unwrapBool compact
            }
          );
  };
};

module Timeline = {
  external timeline : ReasonReact.reactClass = "antd/lib/timeline" [@@bs.module];
  let make ::id=? ::className=? ::style=? ::pending=? =>
    ReasonReact.wrapJsForReason
      reactClass::timeline
      props::
        Js.Undefined.(
          {
            "id": fromOption id,
            "className": fromOption className,
            "style": fromOption style,
            "pending": fromOption pending
          }
        );
  module Item = {
    external item : ReasonReact.reactClass = "Item" [@@bs.module "antd/lib/timeline"];
    let make ::id=? ::className=? ::style=? ::color=? ::dot=? =>
      ReasonReact.wrapJsForReason
        reactClass::item
        props::
          Js.Undefined.(
            {
              "id": fromOption id,
              "className": fromOption className,
              "style": fromOption style,
              "color": fromOption color,
              "dot": fromOption dot
            }
          );
  };
};

module Progress = {
  external progress : ReasonReact.reactClass = "antd/lib/progress" [@@bs.module];
  let make
      ::format=?
      ::gapDegree=?
      ::width=?
      ::type_=?
      ::className=?
      ::style=?
      ::status=?
      ::strokeWidth=?
      ::id=?
      ::percent=?
      ::showInfo=?
      ::gapPosition=? =>
    ReasonReact.wrapJsForReason
      reactClass::progress
      props::
        Js.Undefined.(
          {
            "format": fromOption format,
            "gapDegree": fromOption gapDegree,
            "width": fromOption width,
            "type": fromOption type_,
            "className": fromOption className,
            "style": fromOption style,
            "status": fromOption status,
            "strokeWidth": fromOption strokeWidth,
            "id": fromOption id,
            "percent": fromOption percent,
            "showInfo": unwrapBool showInfo,
            "gapPosition": fromOption gapPosition
          }
        );
};

module Badge = {
  external badge : ReasonReact.reactClass = "antd/lib/badge" [@@bs.module];
  let make
      ::overflowCount=?
      ::className=?
      ::style=?
      ::status=?
      ::id=?
      ::showZero=?
      ::count=?
      ::dot=?
      ::text=? =>
    ReasonReact.wrapJsForReason
      reactClass::badge
      props::
        Js.Undefined.(
          {
            "overflowCount": fromOption overflowCount,
            "className": fromOption className,
            "style": fromOption style,
            "status": fromOption status,
            "id": fromOption id,
            "showZero": unwrapBool showZero,
            "count": fromOption count,
            "dot": unwrapBool dot,
            "text": fromOption text
          }
        );
};

module Menu = {
  external menu : ReasonReact.reactClass = "antd/lib/menu" [@@bs.module];
  let make
      ::onOpenChange=?
      ::selectedKeys=?
      ::onSelect=?
      ::mode=?
      ::multiple=?
      ::inlineIndent=?
      ::className=?
      ::style=?
      ::theme=?
      ::openAnimation=?
      ::id=?
      ::openKeys=?
      ::defaultSelectedKeys=?
      ::defaultOpenKeys=?
      ::onDeselect=?
      ::onClick=?
      ::selectable=?
      ::inlineCollapsed=?
      ::openTransitionName=? =>
    ReasonReact.wrapJsForReason
      reactClass::menu
      props::
        Js.Undefined.(
          {
            "onOpenChange": fromOption onOpenChange,
            "selectedKeys": fromOption selectedKeys,
            "onSelect": fromOption onSelect,
            "mode": fromOption mode,
            "multiple": fromOption multiple,
            "inlineIndent": fromOption inlineIndent,
            "className": fromOption className,
            "style": fromOption style,
            "theme": fromOption theme,
            "openAnimation": fromOption openAnimation,
            "id": fromOption id,
            "openKeys": fromOption openKeys,
            "defaultSelectedKeys": fromOption defaultSelectedKeys,
            "defaultOpenKeys": fromOption defaultOpenKeys,
            "onDeselect": fromOption onDeselect,
            "onClick": fromOption onClick,
            "selectable": fromOption selectable,
            "inlineCollapsed": fromOption inlineCollapsed,
            "openTransitionName": fromOption openTransitionName
          }
        );
  module Divider = {
    external divider : ReasonReact.reactClass = "Divider" [@@bs.module "antd/lib/menu"];
    let make ::id=? ::className=? ::style=? ::disabled=? =>
      ReasonReact.wrapJsForReason
        reactClass::divider
        props::
          Js.Undefined.(
            {
              "id": fromOption id,
              "className": fromOption className,
              "style": fromOption style,
              "disabled": unwrapBool disabled
            }
          );
  };
  module Item = {
    external item : ReasonReact.reactClass = "Item" [@@bs.module "antd/lib/menu"];
    let make ::id=? ::className=? ::style=? ::disabled=? ::key=? =>
      ReasonReact.wrapJsForReason
        reactClass::item
        props::
          Js.Undefined.(
            {
              "id": fromOption id,
              "className": fromOption className,
              "style": fromOption style,
              "disabled": unwrapBool disabled,
              "key": fromOption key
            }
          );
  };
  module SubMenu = {
    external subMenu : ReasonReact.reactClass = "SubMenu" [@@bs.module "antd/lib/menu"];
    let make
        ::disabled=?
        ::key=?
        ::title=?
        ::children=?
        ::onTitleClick=?
        ::id=?
        ::className=?
        ::style=? =>
      ReasonReact.wrapJsForReason
        reactClass::subMenu
        props::
          Js.Undefined.(
            {
              "disabled": unwrapBool disabled,
              "key": fromOption key,
              "title": fromOption title,
              "children": fromOption children,
              "onTitleClick": fromOption onTitleClick,
              "id": fromOption id,
              "className": fromOption className,
              "style": fromOption style
            }
          );
  };
  module ItemGroup = {
    external itemGroup : ReasonReact.reactClass = "ItemGroup" [@@bs.module "antd/lib/menu"];
    let make ::id=? ::className=? ::style=? ::title=? ::children=? =>
      ReasonReact.wrapJsForReason
        reactClass::itemGroup
        props::
          Js.Undefined.(
            {
              "id": fromOption id,
              "className": fromOption className,
              "style": fromOption style,
              "title": fromOption title,
              "children": fromOption children
            }
          );
  };
};

module Tooltip = {
  external tooltip : ReasonReact.reactClass = "antd/lib/tooltip" [@@bs.module];
  let make
      ::arrowPointAtCenter=?
      ::getPopupContainer=?
      ::autoAdjustOverflow=?
      ::mouseEnterDelay=?
      ::mouseLeaveDelay=?
      ::className=?
      ::title=?
      ::style=?
      ::overlay=?
      ::onVisibleChange=?
      ::id=?
      ::overlayStyle=?
      ::overlayClassName=?
      ::visible=?
      ::placement=?
      ::trigger=? =>
    ReasonReact.wrapJsForReason
      reactClass::tooltip
      props::
        Js.Undefined.(
          {
            "arrowPointAtCenter": unwrapBool arrowPointAtCenter,
            "getPopupContainer": fromOption getPopupContainer,
            "autoAdjustOverflow": unwrapBool autoAdjustOverflow,
            "mouseEnterDelay": fromOption mouseEnterDelay,
            "mouseLeaveDelay": fromOption mouseLeaveDelay,
            "className": fromOption className,
            "title": fromOption title,
            "style": fromOption style,
            "overlay": fromOption overlay,
            "onVisibleChange": fromOption onVisibleChange,
            "id": fromOption id,
            "overlayStyle": fromOption overlayStyle,
            "overlayClassName": fromOption overlayClassName,
            "visible": unwrapBool visible,
            "placement": fromOption placement,
            "trigger": fromOption trigger
          }
        );
};

module Upload = {
  external upload : ReasonReact.reactClass = "antd/lib/upload" [@@bs.module];
  let make
      ::withCredentials=?
      ::multiple=?
      ::defaultFileList=?
      ::disabled=?
      ::listType=?
      ::name=?
      ::className=?
      ::headers=?
      ::style=?
      ::id=?
      ::customRequest=?
      ::showUploadList=?
      ::action=?
      ::supportServerRender=?
      ::onChange=?
      ::beforeUpload=?
      ::onRemove=?
      ::fileList=?
      ::accept=?
      ::onPreview=?
      ::data=? =>
    ReasonReact.wrapJsForReason
      reactClass::upload
      props::
        Js.Undefined.(
          {
            "withCredentials": unwrapBool withCredentials,
            "multiple": unwrapBool multiple,
            "defaultFileList": fromOption defaultFileList,
            "disabled": unwrapBool disabled,
            "listType": fromOption listType,
            "name": fromOption name,
            "className": fromOption className,
            "headers": fromOption headers,
            "style": fromOption style,
            "id": fromOption id,
            "customRequest": fromOption customRequest,
            "showUploadList": unwrapBool showUploadList,
            "action": fromOption action,
            "supportServerRender": unwrapBool supportServerRender,
            "onChange": fromOption onChange,
            "beforeUpload": fromOption beforeUpload,
            "onRemove": fromOption onRemove,
            "fileList": fromOption fileList,
            "accept": fromOption accept,
            "onPreview": fromOption onPreview,
            "data": fromOption data
          }
        );
};

module InputNumber = {
  external inputNumber : ReasonReact.reactClass = "antd/lib/input-number" [@@bs.module];
  let make
      ::min=?
      ::disabled=?
      ::formatter=?
      ::value=?
      ::precision=?
      ::className=?
      ::size=?
      ::style=?
      ::parser=?
      ::max=?
      ::id=?
      ::defaultValue=?
      ::onChange=?
      ::step=? =>
    ReasonReact.wrapJsForReason
      reactClass::inputNumber
      props::
        Js.Undefined.(
          {
            "min": fromOption min,
            "disabled": unwrapBool disabled,
            "formatter": fromOption formatter,
            "value": fromOption value,
            "precision": fromOption precision,
            "className": fromOption className,
            "size": fromOption size,
            "style": fromOption style,
            "parser": fromOption parser,
            "max": fromOption max,
            "id": fromOption id,
            "defaultValue": fromOption defaultValue,
            "onChange": fromOption onChange,
            "step": fromOption step
          }
        );
};

module Message = {
  type content;
  type duration = int;
  type options;
  type callback = (unit => unit) [@bs];
  external success : content => duration => callback => unit = "" [@@bs.module "antd/lib/message"];
  external error : content => duration => callback => unit = "" [@@bs.module "antd/lib/message"];
  external info : content => duration => callback => unit = "" [@@bs.module "antd/lib/message"];
  external warning : content => duration => callback => unit = "" [@@bs.module "antd/lib/message"];
  external warn : content => duration => callback => unit = "" [@@bs.module "antd/lib/message"];
  external loading : content => duration => callback => unit = "" [@@bs.module "antd/lib/message"];
  external config : options => unit = "" [@@bs.module "antd/lib/message"];
  external destroy : unit => unit = "" [@@bs.module "antd/lib/message"];
};

module Row = {
  external row : ReasonReact.reactClass = "antd/lib/row" [@@bs.module];
  let make ::type_=? ::gutter=? ::align=? ::justify=? ::id=? ::className=? ::style=? =>
    ReasonReact.wrapJsForReason
      reactClass::row
      props::
        Js.Undefined.(
          {
            "type": fromOption type_,
            "gutter": fromOption gutter,
            "align": fromOption align,
            "justify": fromOption justify,
            "id": fromOption id,
            "className": fromOption className,
            "style": fromOption style
          }
        );
};

module Select = {
  external select : ReasonReact.reactClass = "antd/lib/select" [@@bs.module];
  let make
      ::multiple=?
      ::getPopupContainer=?
      ::disabled=?
      ::optionLabelProp=?
      ::onSelect=?
      ::allowClear=?
      ::placeholder=?
      ::showSearch=?
      ::value=?
      ::mode=?
      ::dropdownStyle=?
      ::onBlur=?
      ::firstActiveValue=?
      ::className=?
      ::size=?
      ::dropdownClassName=?
      ::onSearch=?
      ::style=?
      ::notFoundContent=?
      ::labelInValue=?
      ::dropdownMatchSelectWidth=?
      ::tags=?
      ::id=?
      ::defaultActiveFirstOption=?
      ::optionFilterProp=?
      ::defaultValue=?
      ::onChange=?
      ::combobox=?
      ::filterOption=?
      ::tokenSeparators=?
      ::onDeselect=?
      ::onFocus=? =>
    ReasonReact.wrapJsForReason
      reactClass::select
      props::
        Js.Undefined.(
          {
            "multiple": unwrapBool multiple,
            "getPopupContainer": fromOption getPopupContainer,
            "disabled": unwrapBool disabled,
            "optionLabelProp": fromOption optionLabelProp,
            "onSelect": fromOption onSelect,
            "allowClear": unwrapBool allowClear,
            "placeholder": fromOption placeholder,
            "showSearch": unwrapBool showSearch,
            "value": fromOption value,
            "mode": fromOption mode,
            "dropdownStyle": fromOption dropdownStyle,
            "onBlur": fromOption onBlur,
            "firstActiveValue": fromOption firstActiveValue,
            "className": fromOption className,
            "size": fromOption size,
            "dropdownClassName": fromOption dropdownClassName,
            "onSearch": fromOption onSearch,
            "style": fromOption style,
            "notFoundContent": fromOption notFoundContent,
            "labelInValue": unwrapBool labelInValue,
            "dropdownMatchSelectWidth": unwrapBool dropdownMatchSelectWidth,
            "tags": unwrapBool tags,
            "id": fromOption id,
            "defaultActiveFirstOption": unwrapBool defaultActiveFirstOption,
            "optionFilterProp": fromOption optionFilterProp,
            "defaultValue": fromOption defaultValue,
            "onChange": fromOption onChange,
            "combobox": unwrapBool combobox,
            "filterOption": unwrapBool filterOption,
            "tokenSeparators": fromOption tokenSeparators,
            "onDeselect": fromOption onDeselect,
            "onFocus": fromOption onFocus
          }
        );
  module Option = {
    external option : ReasonReact.reactClass = "Option" [@@bs.module "antd/lib/select"];
    let make ::value=? ::key=? ::title=? ::disabled=? ::id=? ::className=? ::style=? =>
      ReasonReact.wrapJsForReason
        reactClass::option
        props::
          Js.Undefined.(
            {
              "value": fromOption value,
              "key": fromOption key,
              "title": fromOption title,
              "disabled": unwrapBool disabled,
              "id": fromOption id,
              "className": fromOption className,
              "style": fromOption style
            }
          );
  };
  module OptGroup = {
    external optGroup : ReasonReact.reactClass = "OptGroup" [@@bs.module "antd/lib/select"];
    let make ::id=? ::className=? ::style=? ::label=? ::key=? =>
      ReasonReact.wrapJsForReason
        reactClass::optGroup
        props::
          Js.Undefined.(
            {
              "id": fromOption id,
              "className": fromOption className,
              "style": fromOption style,
              "label": fromOption label,
              "key": fromOption key
            }
          );
  };
};

module Slider = {
  external slider : ReasonReact.reactClass = "antd/lib/slider" [@@bs.module];
  let make
      ::onAfterChange=?
      ::min=?
      ::disabled=?
      ::vertical=?
      ::value=?
      ::range=?
      ::included=?
      ::className=?
      ::style=?
      ::max=?
      ::id=?
      ::marks=?
      ::tipFormatter=?
      ::defaultValue=?
      ::onChange=?
      ::step=?
      ::dots=? =>
    ReasonReact.wrapJsForReason
      reactClass::slider
      props::
        Js.Undefined.(
          {
            "onAfterChange": fromOption onAfterChange,
            "min": fromOption min,
            "disabled": unwrapBool disabled,
            "vertical": unwrapBool vertical,
            "value": fromOption value,
            "range": unwrapBool range,
            "included": unwrapBool included,
            "className": fromOption className,
            "style": fromOption style,
            "max": fromOption max,
            "id": fromOption id,
            "marks": fromOption marks,
            "tipFormatter": fromOption tipFormatter,
            "defaultValue": fromOption defaultValue,
            "onChange": fromOption onChange,
            "step": fromOption step,
            "dots": unwrapBool dots
          }
        );
};
