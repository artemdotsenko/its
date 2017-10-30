<?php
/**
 * @file
 * its_contact.features.webform.inc
 */

/**
 * Implements hook_webform_defaults().
 */
function its_contact_webform_defaults() {
$webforms = array();
  $webforms['_'] = array(
  'uid' => 1,
  'title' => 'Заказать звонок',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'a5cbfdc5-5d03-4f91-b059-afeb41fbadb5',
  'type' => 'webform',
  'language' => 'ru',
  'tnid' => 0,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => 'b68ac92d-15fa-4f70-9d21-b31734143169',
  'revision_uid' => 1,
  'path' => array(
    'pathauto' => 1,
  ),
  'webform' => array(
    'confirmation' => 'Спасибо, мы с Вами свяжемся.',
    'confirmation_format' => 'filtered_html',
    'redirect_url' => '<none>',
    'status' => 1,
    'block' => 1,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 0,
    'confidential' => 0,
    'submit_text' => 'заказать',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_bar' => 1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => 'filtered_html',
    'preview_excluded_components' => array(),
    'machine_name' => '_',
    'webform_ajax' => 1,
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(
      0 => array(
        'email' => 'info@ischool.org.ua',
        'subject' => 'Заказан звонок',
        'from_name' => '_-name',
        'from_address' => 'default',
        'template' => '[submission:date:long], [submission:values:name] заказал звонок 
Телефон: [submission:values:phone]
',
        'excluded_components' => array(),
        'html' => 0,
        'attachments' => 0,
        'exclude_empty' => 0,
        'extra' => FALSE,
        'status' => 1,
        'components_machine_names' => array(
          'email' => FALSE,
          'subject' => FALSE,
          'from_name' => TRUE,
          'from_address' => FALSE,
        ),
      ),
    ),
    'components' => array(
      '_-name' => array(
        'form_key' => 'name',
        'name' => 'Имя',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'none',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'placeholder' => 'Имя',
          'encrypt' => 1,
          'width' => '',
          'maxlength' => '',
          'minlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 1,
        'machine_name' => '_-name',
        'page_num' => 1,
      ),
      '_-phone' => array(
        'form_key' => 'phone',
        'name' => 'Телефон',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'none',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'placeholder' => 'Телефон',
          'field_prefix' => '+38',
          'encrypt' => 1,
          'width' => '',
          'maxlength' => '',
          'minlength' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 2,
        'machine_name' => '_-phone',
        'page_num' => 1,
      ),
    ),
    'conditionals' => array(),
  ),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
);
  $webforms['__2'] = array(
  'uid' => 1,
  'title' => 'Подписаться на рассылку',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '80653504-74ee-4daf-b0f3-7c1aa2e08882',
  'type' => 'webform',
  'language' => 'ru',
  'tnid' => 0,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => 'f2d11b62-3e48-4729-a8cb-9455f8c57131',
  'revision_uid' => 1,
  'path' => array(
    'pathauto' => 1,
  ),
  'webform' => array(
    'confirmation' => 'Спасибо, Вы успешно подписаны.',
    'confirmation_format' => 'filtered_html',
    'redirect_url' => '<none>',
    'status' => 1,
    'block' => 1,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 0,
    'confidential' => 0,
    'submit_text' => 'Подписаться',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_bar' => 1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => 'filtered_html',
    'preview_excluded_components' => array(),
    'machine_name' => '__2',
    'webform_ajax' => 1,
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(),
    'components' => array(
      '__2-title' => array(
        'form_key' => 'title',
        'name' => 'Заголовок',
        'type' => 'markup',
        'value' => '<h2>Не пропусти<br/>ни одной новости</h2>',
        'extra' => array(
          'format' => 'full_html',
          'private' => 0,
          'display_on' => 'form',
        ),
        'required' => 0,
        'weight' => 2,
        'machine_name' => '__2-title',
        'page_num' => 1,
      ),
      '__2-wrapper' => array(
        'form_key' => 'wrapper',
        'name' => 'Wrapper',
        'type' => 'fieldset',
        'value' => '',
        'extra' => array(
          'title_display' => 'none',
          'description_above' => 0,
          'private' => 0,
          'css_classes' => '',
          'collapsible' => 0,
          'collapsed' => 0,
          'description' => '',
        ),
        'required' => 0,
        'weight' => 3,
        'machine_name' => '__2-wrapper',
        'page_num' => 1,
      ),
      '__2-name' => array(
        'form_key' => 'name',
        'name' => 'Имя',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'none',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'placeholder' => 'Имя',
          'encrypt' => 1,
          'width' => '',
          'maxlength' => '',
          'minlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 4,
        'machine_name' => '__2-name',
        'page_num' => 1,
        'parent_machine_name' => '__2-wrapper',
      ),
      '__2-email' => array(
        'form_key' => 'email',
        'name' => 'Email',
        'type' => 'email',
        'value' => '',
        'extra' => array(
          'title_display' => 'none',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'placeholder' => 'Email',
          'encrypt' => 1,
          'multiple' => 0,
          'format' => 'short',
          'width' => '',
          'unique' => 0,
          'disabled' => 0,
          'description' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 5,
        'machine_name' => '__2-email',
        'page_num' => 1,
        'parent_machine_name' => '__2-wrapper',
      ),
    ),
    'conditionals' => array(),
  ),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
);
  $webforms['contact_form'] = array(
  'uid' => 1,
  'title' => 'Контактная форма',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '6df7ae31-298d-4a88-a2d9-c2d34b5fbc39',
  'type' => 'webform',
  'language' => 'ru',
  'tnid' => 90,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => '8461923e-d9e8-4850-9e0d-ae7082bf4c43',
  'revision_uid' => 1,
  'path' => array(
    'pathauto' => 1,
  ),
  'webform' => array(
    'confirmation' => '<p>Спасибо! <a href="/">Вернуться на главную страницу.</a></p>
',
    'confirmation_format' => 'full_html',
    'redirect_url' => '<confirmation>',
    'status' => 1,
    'block' => 1,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 0,
    'confidential' => 0,
    'submit_text' => 'Отправить',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_bar' => 1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => 'full_html',
    'preview_excluded_components' => array(),
    'machine_name' => 'contact_form',
    'webform_ajax' => 0,
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(
      0 => array(
        'email' => 'info@ischool.org.ua',
        'subject' => 'default',
        'from_name' => 'default',
        'from_address' => 'contact_form__email',
        'template' => 'Дата заполнения: [submission:date:long]
Submitted values are:
[submission:values]

Посмотреть на сайте:
[submission:url]',
        'excluded_components' => array(),
        'html' => 0,
        'attachments' => 0,
        'exclude_empty' => 0,
        'extra' => FALSE,
        'status' => 1,
        'components_machine_names' => array(
          'email' => FALSE,
          'subject' => FALSE,
          'from_name' => FALSE,
          'from_address' => TRUE,
        ),
      ),
    ),
    'components' => array(
      'contact_form__obyazatelnye_polya' => array(
        'form_key' => 'obyazatelnye_polya',
        'name' => '*обязательные поля',
        'type' => 'markup',
        'value' => '<p>*обязательные поля</p>
',
        'extra' => array(
          'format' => 'full_html',
          'private' => 0,
          'display_on' => 'form',
        ),
        'required' => 0,
        'weight' => 0,
        'machine_name' => 'contact_form__obyazatelnye_polya',
        'page_num' => 1,
      ),
      'contact_form__full_name' => array(
        'form_key' => 'full_name',
        'name' => '* Имя, Фамилия',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'none',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'placeholder' => '* Имя, Фамилия',
          'encrypt' => 0,
          'width' => '',
          'maxlength' => '',
          'minlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 1,
        'machine_name' => 'contact_form__full_name',
        'page_num' => 1,
      ),
      'contact_form__phone_number' => array(
        'form_key' => 'phone_number',
        'name' => '* Телефон',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'none',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'placeholder' => '* Телефон',
          'encrypt' => 0,
          'width' => '',
          'maxlength' => '',
          'minlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 2,
        'machine_name' => 'contact_form__phone_number',
        'page_num' => 1,
      ),
      'contact_form__email' => array(
        'form_key' => 'email',
        'name' => '* Email',
        'type' => 'email',
        'value' => '',
        'extra' => array(
          'title_display' => 'none',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'placeholder' => '* Email',
          'encrypt' => 0,
          'multiple' => 0,
          'format' => 'short',
          'width' => '',
          'unique' => 0,
          'disabled' => 0,
          'description' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 3,
        'machine_name' => 'contact_form__email',
        'page_num' => 1,
      ),
      'contact_form__cooment' => array(
        'form_key' => 'cooment',
        'name' => 'Коментарий',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'title_display' => 'none',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'rows' => 5,
          'resizable' => 0,
          'placeholder' => 'Коментарий',
          'encrypt' => 0,
          'cols' => '',
          'disabled' => 0,
          'description' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 4,
        'machine_name' => 'contact_form__cooment',
        'page_num' => 1,
      ),
    ),
    'conditionals' => array(),
  ),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
);
  $webforms['contact_form_en'] = array(
  'uid' => 1,
  'title' => 'Contact Form',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '3d87733f-561d-4d6e-956a-33d0cd7e7cdf',
  'type' => 'webform',
  'language' => 'en',
  'tnid' => 90,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => '6222bb1f-9b56-4a24-8e67-6e6fd0c7548c',
  'revision_uid' => 1,
  'path' => array(
    'pathauto' => 1,
  ),
  'webform' => array(
    'confirmation' => '<p>Thank you! <a href="/">Back to home page</a>.</p>
',
    'confirmation_format' => 'full_html',
    'redirect_url' => '<confirmation>',
    'status' => 1,
    'block' => 1,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 0,
    'confidential' => 0,
    'submit_text' => 'Send',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_bar' => 1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => 'full_html',
    'preview_excluded_components' => array(),
    'machine_name' => 'contact_form_en',
    'webform_ajax' => 0,
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(
      0 => array(
        'email' => 'info@ischool.org.ua',
        'subject' => 'default',
        'from_name' => 'default',
        'from_address' => 'default',
        'template' => 'Submitted on [submission:date:long]
Submitted values are:
[submission:values]

The results of this submission may be viewed at:
[submission:url]',
        'excluded_components' => array(),
        'html' => 0,
        'attachments' => 0,
        'exclude_empty' => 0,
        'extra' => FALSE,
        'status' => 1,
        'components_machine_names' => array(
          'email' => FALSE,
          'subject' => FALSE,
          'from_name' => FALSE,
          'from_address' => FALSE,
        ),
      ),
    ),
    'components' => array(
      'contact_form_en__obyazatelnye_polya' => array(
        'form_key' => 'obyazatelnye_polya',
        'name' => '*Required fields',
        'type' => 'markup',
        'value' => '<p>*Required fields</p>
',
        'extra' => array(
          'format' => 'full_html',
          'private' => 0,
          'display_on' => 'form',
        ),
        'required' => 0,
        'weight' => 0,
        'machine_name' => 'contact_form_en__obyazatelnye_polya',
        'page_num' => 1,
      ),
      'contact_form_en__full_name' => array(
        'form_key' => 'full_name',
        'name' => '* Full Name',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'none',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'placeholder' => '* Full Name',
          'encrypt' => 0,
          'width' => '',
          'maxlength' => '',
          'minlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 1,
        'machine_name' => 'contact_form_en__full_name',
        'page_num' => 1,
      ),
      'contact_form_en__phone' => array(
        'form_key' => 'phone',
        'name' => '* Phone',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'none',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'placeholder' => '* Phone',
          'encrypt' => 0,
          'width' => '',
          'maxlength' => '',
          'minlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 2,
        'machine_name' => 'contact_form_en__phone',
        'page_num' => 1,
      ),
      'contact_form_en__email' => array(
        'form_key' => 'email',
        'name' => '* Email',
        'type' => 'email',
        'value' => '',
        'extra' => array(
          'title_display' => 'none',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'placeholder' => '* Email',
          'encrypt' => 0,
          'multiple' => 0,
          'format' => 'short',
          'width' => '',
          'unique' => 0,
          'disabled' => 0,
          'description' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 3,
        'machine_name' => 'contact_form_en__email',
        'page_num' => 1,
      ),
      'contact_form_en__comment' => array(
        'form_key' => 'comment',
        'name' => 'Comment',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'title_display' => 'none',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'resizable' => 0,
          'placeholder' => 'Comment',
          'encrypt' => 0,
          'cols' => '',
          'rows' => '',
          'disabled' => 0,
          'description' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 4,
        'machine_name' => 'contact_form_en__comment',
        'page_num' => 1,
      ),
    ),
    'conditionals' => array(),
  ),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
);
  $webforms['contact_form_ua'] = array(
  'uid' => 1,
  'title' => 'Контактна форма',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'e76e1725-5a9e-424b-b7eb-0052df4aa94e',
  'type' => 'webform',
  'language' => 'ua',
  'tnid' => 90,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => '5de01ea2-06f4-4b1c-8b70-1e18402eca73',
  'revision_uid' => 1,
  'path' => array(
    'pathauto' => 1,
  ),
  'webform' => array(
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'status' => 1,
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'confidential' => 0,
    'submit_text' => '',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_bar' => 1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'machine_name' => 'contact_form_ua',
    'webform_ajax' => 0,
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(),
    'components' => array(
      'contact_form_ua__obyazatelnye_polya' => array(
        'form_key' => 'obyazatelnye_polya',
        'name' => '* Обов\'язкові поля',
        'type' => 'markup',
        'value' => '<p>* Обов&#39;язкові поля</p>
',
        'extra' => array(
          'format' => 'full_html',
          'private' => 0,
          'display_on' => 'form',
        ),
        'required' => 0,
        'weight' => 0,
        'machine_name' => 'contact_form_ua__obyazatelnye_polya',
        'page_num' => 1,
      ),
      'contact_form_ua__full_name' => array(
        'form_key' => 'full_name',
        'name' => '* Ім\'я, Призвіще',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'none',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'placeholder' => '* Ім\'я, Призвіще',
          'encrypt' => 0,
          'width' => '',
          'maxlength' => '',
          'minlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 1,
        'machine_name' => 'contact_form_ua__full_name',
        'page_num' => 1,
      ),
      'contact_form_ua__phone' => array(
        'form_key' => 'phone',
        'name' => '* Телефон',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'none',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'placeholder' => '* Телефон',
          'encrypt' => 0,
          'width' => '',
          'maxlength' => '',
          'minlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 2,
        'machine_name' => 'contact_form_ua__phone',
        'page_num' => 1,
      ),
      'contact_form_ua__email' => array(
        'form_key' => 'email',
        'name' => '* Email',
        'type' => 'email',
        'value' => '',
        'extra' => array(
          'title_display' => 'none',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'placeholder' => '* Email',
          'encrypt' => 0,
          'multiple' => 0,
          'format' => 'short',
          'width' => '',
          'unique' => 0,
          'disabled' => 0,
          'description' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 3,
        'machine_name' => 'contact_form_ua__email',
        'page_num' => 1,
      ),
      'contact_form_ua__comment' => array(
        'form_key' => 'comment',
        'name' => 'Коментар',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'title_display' => 'none',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'resizable' => 0,
          'placeholder' => 'Коментар',
          'encrypt' => 0,
          'cols' => '',
          'rows' => '',
          'disabled' => 0,
          'description' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 4,
        'machine_name' => 'contact_form_ua__comment',
        'page_num' => 1,
      ),
    ),
    'conditionals' => array(),
  ),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
);
return $webforms;
}