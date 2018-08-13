#include "exceptions.h"

namespace allpix {
    template <typename T> Message<T>::Message(std::vector<T> data) : BaseMessage(), data_(std::move(data)) {}
    template <typename T>
    Message<T>::Message(std::vector<T> data, std::shared_ptr<const Detector> detector)
        : BaseMessage(detector), data_(std::move(data)) {}

    template <typename T> const std::vector<T>& Message<T>::getData() const { return data_; }

    /**
     * Chooses between internal \ref get_object_array implementations dependent on the type of the object (if it drives from
     * \ref allpix::Object).
     */
    template <typename T> std::vector<std::reference_wrapper<Object>> Message<T>::getObjectArray() {
        return get_object_array();
    }
    /**
     * Pass the data as a copy of the internal vector referencing the same data as the internal vector
     *
     * @warning Data through this method can only be accessed for as long as this message exists
     */
    template <typename T>
    template <typename U>
    std::vector<std::reference_wrapper<Object>>
    Message<T>::get_object_array(typename std::enable_if<std::is_base_of<Object, U>::value>::type*) {
        std::vector<std::reference_wrapper<Object>> data(data_.begin(), data_.end());
        return data;
    }
    /**
     * @throws MessageWithoutObjectException Always (but this method is only used if this message does not contain types
     * derived from \ref allpix::Object.
     */
    template <typename T>
    template <typename U>
    std::vector<std::reference_wrapper<Object>>
    Message<T>::get_object_array(typename std::enable_if<!std::is_base_of<Object, U>::value>::type*) {
        throw MessageWithoutObjectException(typeid(*this));
    }
} // namespace allpix
