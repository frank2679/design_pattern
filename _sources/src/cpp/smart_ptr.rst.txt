shared_ptr
----------

`make_shared` is to create a new object. 
When you use shared_ptr, use it from beginning, don't convert a raw pointer to a shared_ptr.

.. code-block:: cpp
    :linenos:
    :emphasize-lines: 1

    std::shared_ptr<int> ptr_obj = std::make_shared<int>();

    // not suggested
    int obj;
    std::shared_ptr<int> ptr_obj = shared_ptr<int>(&obj);